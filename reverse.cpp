#include<iostream>
using namespace std;
void check(string name);

main()
{
string name;
cout<<"statement:";
cin>>name;
check(name);
}
void check(string name)
{
 if(name=="true")
 {cout<<"false";
 }
 if(name=="false") 
 {cout<<"true";
 }
}