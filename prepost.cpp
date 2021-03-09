//Write a program in C++ to display the operation of pre and post increment and decrement. 
#include <iostream>
using namespace std;
 
int main() 
{
	int a=57;
	cout<< "\nDisplay the operation of pre and post increment and decrement :\n"<<endl;
	cout<<"The number is :"<<a<<endl;
	a++;
	cout<<"After post increment by 1 the number is : "<<a<<endl;
	++a;
	cout<<"After pre increment by 1 the number is : "<<a<<endl;
    a=a+1;
	cout<<"After increasing by 1 the number is : "<<a<<endl;
    a--;
	cout<<"After post decrement by 1 the number is : "<<a<<endl;
	--a;
	cout<<"After pre decrement by 1 the number is : "<<a<<endl;
	a=a-1;
	cout<<"After decreasing by 1 the number is : "<<a<<endl;
	
	return 0;
}