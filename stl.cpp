In real life we have to Deal with collection of data/values => where we store ?
In data structures => Array (mostlt inbuild data structure)
why array ? becoz it stores the data of similar types
int A[10];		// creating in stack
int *A = new int [10];   // creating in heap

We can perform multiple operations on this aaarrayyy

Problem is fixed size arrayy .....We can't change it size later 
if we take a larger array let suppose A[100] and storing only 10 elements than the space left in array is waste for us now !!

Problem : At the time of insertion ,deletion. 

To deal with the common solution taken bby the programmers is .. Create a dynamic array

int *A= new int [10];    // let suppose we want to add 11th element
A=new int[20];   // than Copy all the elements of above array in this and that delete old array



Can we use any other data structure.. yes we can use Linked List

Collection of nodes where each node have collection of data

Head               Tail

We can simply add or delete any node here easily ....

We can use singly linked list and doubly linked list too.

Note: In doubly we can traverse both the directions 



CAn we use other data structure to store data ? Yes we can .., most commonly are 

1. Stack
2. Queue
3. Deque
4. Priority Queue
5. Map = mostly used with hashtable 
6. Set


Do I need to write all these codes by myself ? No C++ STL provides all this build in classes in STL.  


STL => 1.  Algorithm => like search(),sort(),binary-search(),reverse(),concat(),copy(),union(),intersection(),merge(),heap().
	   2.  Containers => vector , list , forward list , deque , priority queue , stackk , set, multiset , map , multimap 
	   		 // generic => work for any type of data
	   3.  Iterators => for each loop,iterator class 
	   
	   
	   Note:-> forward list is like singly linked list i.e. in forward direction only
	   		   deque is like both direction vali array
	   		   priority queue is like max heap value .. it always pop the max value from queue
	   		   set have unique value
	   		   multiset may have duplicate value .. no matter whats the order 
			   map have unique key value pair 
			   multimap have multiple keys with same name (i.e not unique) but different value for each key  
