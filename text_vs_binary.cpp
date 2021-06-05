//                                                              File Handeling
															1. Text
															2. Binary 
			
			#1st Binary 												
			Let we are storing a no int a=28;
			
			      				 16 8 4 2 1
			In Binary =>			11100 
			But our system is of 64 bit so it is stored as        59 zeroes ...11100
			Let we are taking 16 bit ka than :    0000000000011100
			
			It is fast , take less memory ...  but when we open it in notepad it give give some unreadable language of symbols.
			
			#2nd Text
			Let we are storing a no int a=28;
						Ascii value	    50 56
		Binary value of Ascii codes 110010    111000
			
			      			 
			But our system is of 64 bit so it is stored as        58 zeroes ...110010  and 58 zeroes ...111000
			Let we are taking 16 bit ka than :    0000000000110010     0000000000111000
			
			It is slow , take more memory ...  but when we open it in notepad it will give that exact value.
			why slow ?
			becoz coversion  from binary to ascii than ascii too binary