// Namespace is used to remove the name conflict b/w resources like class,object,function

/*
#include<iostream>
namespace chuza{
	fun(){
		std::cout<<"I am chuzzaaaa"<<std::endl;
	}	
}

namespace bacha{      // name spce is used when we hav etwo same named func or class or object ....
 	fun(){
		std::cout<<"I am chuhaa ka bachaaa"<<std::endl;
	}
}

using namespace bacha;
int main(){
	chuza::fun();    // without using using namespace chuza .. we can call it like this.
	fun();
}
*/



#include<iostream>
using namespace std;
namespace chuza{
	fun(){
		cout<<"I am chuzzaaaa"<<endl;
	}	
}

namespace bacha{      // name spce is used when we hav etwo same named func or class or object ....
 	fun(){
		cout<<"I am chuhaa ka bachaaa"<<endl;
	}
}

using namespace bacha;
int main(){
	chuza::fun();    // without using using namespace chuza .. we can call it like this.
	fun();
}