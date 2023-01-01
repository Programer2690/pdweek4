#include<iostream>
using namespace std;
void check(int num1,int num2);

main()
{ 
  int num1,num2;
  cout<<"enter first number:";
  cin>>num1;
  cout<<"enter second number:";
  cin>>num2;
  check(num1,num2);
}
void check(int num1,int num2)
{
 if(num1==num2)
 {cout<<"true";
 }
 if(num1!=num2)
 {cout<<"false";
 }
}
