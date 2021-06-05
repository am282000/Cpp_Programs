#include<iostream>
#include<fstream>
#include<map>
#include<cstdlib>              //To use exit(0)
#include<vector>

using namespace std;
#define MIN_BALANCE 500			// Account must have minimum balance of 500

class InsufficientFunds : exception{};

class Account{
	private:
		long accountNumber;
		string firstName;
		string lastName;
		float balance;
		static long NextAccountNumber;
	public:
		/*       Constructors     */
		Account(){}
		Account(string fname, string lname, float balance);
		
		/*       Accessors     */
		long getAccNo(){return accountNumber;}
		string getFirstName(){return firstName;}
		string getLastName(){return lastName;}
		float getBalance(){return balance;}
		
		/*       functions     */
		void Deposit(float amount);
		void Withdraw(float amount);
		
		/*       static functions     */
		static void setLastAccountNumber(long accountNumber);
		static long getLastAccountNumber();
		
		/*       operator overloading     */
		friend ofstream & operator <<(ofstream &ofs, Account &acc);
		friend ifstream & operator >>(ifstream &ifs,Account &acc);
		friend ostream & operator <<(ostream &os, Account &acc);
};
long Account :: NextAccountNumber=0;        // coz its static next tym it will contain the last value of accnt no created

class Bank {
	private:
		map<long,Account> accounts;            //mapping of <Accno , All other details>
	public:
		Bank();
		Account OpenAccount(string fName,string lName , float balance);
		Account BalanceEnquiry(long accountNumber);
		Account Deposit(long accountNumber, float amount);
		Account Withdraw(long accountNumber, float amount);
		void CloseAccount(long accountNumber);        // When we close an account we need a void file -> that why we used void returntype
		void ShowAllAccounts();
		~Bank();
};


/*       **********************   Defining all the functions of Account Class  *************************               */

/*       Defining functions       */
Account :: Account(string fname, string lname, float balance){
	NextAccountNumber++;
	accountNumber = NextAccountNumber;
	firstName=fname;
	lastName=lname;
	this->balance=balance;            // class balance = local balance ... To avoid name ambiguity we use this-> 
}


void Account :: Deposit(float amount) {
	balance=balance+amount;
} 

void Account :: Withdraw(float amount){
	try{
		if((balance - amount)<MIN_BALANCE)
		throw InsufficientFunds();		// throwing an exception 
		balance=balance-amount;
		cout<<"Amount is Withdrawn."<<endl<<endl;
	}
	catch(InsufficientFunds e){
		cout<<"Insuffient Funds !! No Amount is Withdrawn ."<<endl<<endl;
	}
}

void Account :: setLastAccountNumber(long accountNumber){
	NextAccountNumber = accountNumber;
}

long Account :: getLastAccountNumber(){
	return NextAccountNumber;
}


/*     Defining Operator Overloading         */


ofstream & operator <<(ofstream &ofs, Account &acc){
	ofs<<acc.accountNumber<<endl;
	ofs<<acc.firstName<<endl;
	ofs<<acc.lastName<<endl;
	ofs<<acc.balance<<endl;
	return ofs;
}

ifstream & operator >>(ifstream &ifs,Account &acc){
	ifs>>acc.accountNumber>>acc.firstName>>acc.lastName>>acc.balance;
	return ifs;
}
	
ostream & operator <<(ostream &os, Account &acc){
	os<<"Account No : "<<acc.getAccNo()<<endl;  	// use accessors to grt values .. becoz they are prive data members
	os<<"First Name : "<<acc.getFirstName()<<endl;
	os<<"Last Name : "<<acc.getLastName()<<endl;
	os<<"Balance : "<<acc.getBalance()<<endl;
	return os;
}


/*       **********************   Defining all the functions of Bank Class  *************************               */

/*  Bank Constructor    */
Bank :: Bank(){
	Account account;
	ifstream infile;
	infile.open("Bank.data");
	if(!infile){			// if there is no file exist
		cout<<"Error in opening !! File Not Found. "<<endl;
		return ;		//come out of if loop  only 
	}
	while(!infile.eof()){
		infile>>account;
		accounts.insert(pair<long,Account>(account.getAccNo(), account));   // input from user 
	}
	Account :: setLastAccountNumber(account.getAccNo());		// assign last value of acc no to setLast func
	infile.close();
}

/*  Open Account */
Account Bank :: OpenAccount(string fName, string lName, float balance){
	ofstream outfile;
	Account account(fName,lName,balance);
	accounts.insert(pair<long,Account>(account.getAccNo(),account ));
	
	outfile.open("Bank.data",ios::trunc);
	
	map<long,Account> :: iterator itr;
	for(itr=accounts.begin();itr!=accounts.end();itr++){
		outfile<<itr->second;			// Why itr-> second .....Account all data that consists of fname, lname,balance 
	}
	outfile.close();
	return account;
}

/*   Balance Enquiry  */
Account Bank :: BalanceEnquiry(long accountNumber){
	map<long,Account> ::iterator itr;
	itr=accounts.find(accountNumber);
	return itr->second;
}

/*   Deposit  */
Account Bank :: Deposit(long accountNumber,float amount){
	map<long,Account> ::iterator itr;
	itr=accounts.find(accountNumber);
	itr->second.Deposit(amount);
	return itr->second;
}

/*   Withdraw  */
Account Bank :: Withdraw(long accountNumber,float amount){
	map<long,Account> ::iterator itr;
	itr=accounts.find(accountNumber);
	itr->second.Withdraw(amount);
	return itr->second;
}

/*   CloseAccount  */
void Bank :: CloseAccount(long accountNumber){
	map<long,Account> ::iterator itr;
	itr=accounts.find(accountNumber);
	cout<<"Account is Closed."<<endl<<endl;    // itr->second  if you want to show account detal twice.
	accounts.erase(accountNumber);
}

/*   Show All Accounts  */
void Bank :: ShowAllAccounts(){
	map<long,Account> :: iterator itr;
	cout<<"All Accounts "<<endl;
	for(itr=accounts.begin(); itr!=accounts.end();itr++){
		cout<<itr->second<<endl;   // <<itr->first  if you want to show total account created till(wheather deleated)
	}
}

/*   Bank Destructor  */
Bank ::~Bank(){
	ofstream outfile;
	outfile.open("Bank.data", ios::trunc);		// always delete old data
	
	map<long,Account> :: iterator itr;
	for(itr=accounts.begin();itr!=accounts.end();itr++){
		outfile<<itr->second;
	}
	outfile.close();
}

int main(){
	Account acc;
	Bank b;
	string fname,lname;
	long accountNumber;
	int choice;
	float balance,amount;
	cout<<"********   Banking System   *********"<<endl;
	do{
		cout<<"\n \t Select an Option ";
		cout<<"\n \t 1. Open an Account ";
		cout<<"\n \t 2. Balance Enquiry ";
		cout<<"\n \t 3. Deposit ";
		cout<<"\n \t 4. Withdraw ";
		cout<<"\n \t 5. Close an Account ";
		cout<<"\n \t 6. Show all accounts ";
		cout<<"\n \t 7. Quit ";
		cout<<"\n \t Enter Your Choice : ";
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"Enter First name : ";
				cin>>fname;
				cout<<"Enter Last name : ";
				cin>>lname;
				cout<<"Enter Initial Balance : ";
				cin>>balance;
				acc = b.OpenAccount(fname,lname,balance);
				cout<<"Congratulations !! Account has been created successfully. "<<endl<<endl;
				cout<<acc;
				break;
			case 2:
				cout<<"Enter Account Number : ";
				cin>>accountNumber;
				acc = b.BalanceEnquiry(accountNumber);
				cout<<"Your Account details. "<<endl<<endl;
				cout<<acc;
				break;
			case 3:
				cout<<"Enter Account Number : ";
				cin>>accountNumber;
				cout<<"Enter Amount you want to Deposit : ";
				cin>>amount;
				acc = b.Deposit(accountNumber,amount);
				cout<<"Amount is Deposited."<<endl<<endl;
				cout<<acc;
				break;
			case 4:
				cout<<"Enter Account Number : ";
				cin>>accountNumber;
				cout<<"Enter Amount you want to Withdraw : ";
				cin>>amount;
				acc = b.Withdraw(accountNumber,amount);
				//cout<<"Amount is Withdrawn."<<endl<<endl;
				cout<<acc;
				break;
			case 5:
				cout<<"Enter Account Number : ";
				cin>>accountNumber;
				b.CloseAccount(accountNumber);
				//cout<<"Account is Closed."<<endl<<endl;
				cout<<acc;
				break;
			case 6:
				b.ShowAllAccounts();
				break;
			case 7:
				break;	
			default:
				cout<<"\n************* Enter a Valid Choice & TRY AGAIN **************** ";
				exit(0);
		}
	}while(choice!=7);
	return 0;
}













