//Write a program in C++ to check overflow/underflow during various arithmetical operation
#include <iostream>
using namespace std;
 
int main() 
{
  cout<< "Check overflow/underflow during various arithmetical operation :"<<endl;
  int b=-2147483648,a=2147483647;
  cout<< "Overflow the integer range and set in minimum range : "<<a+1<<endl;
  cout<<"Increasing from its minimum range : "<<a+2<<endl;
  cout<<"Product is :"<<a*a<<endl;
  cout<<"Underflow the range and set in maximum range : "<<b-1<<endl;
  cout<<"Decreasing from its maximum range : "<<b-2<<endl;
  cout<<"Product is : "<<b*b<<endl;
  return 0;
}