#include<iostream>
using namespace std;

main()
{
 string name;
 int price;
 cout<<"which flower do you want:";
 cin>>name;
 if(name=="red rose")
 {
 int num,price;
 cout<<"enter no. of flowers:";
 cin>>num;
 price=num*2;
 cout<<"price="<<price;
 }  

 if(name=="tulips")
 {
 int num,price;
 cout<<"enter no. of flowers:";
 cin>>num;
 price=num*2.50;
 cout<<"price="<<price;
 }

 if(name=="white rose")
 {
 int num,price;
 cout<<"enter no. of flowers:";
 cin>>num;
 price=num*4.10;
 cout<<"price="<<price;
 }
 if(price>200)
 {
  price=price-0.20*price;
  cout<<"price after discount:"<<price;
 }
}