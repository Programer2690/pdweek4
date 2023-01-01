#include<iostream>
using namespace std;

main()
{
  while(true)
  {
 int price,discount;
 string country,pakistan,ireland,india,england,canada;
 cout<<"enter your country:";
 cin>>country;
 cout<<"enter ticket price in dollars:";
 cin>>price;
 
 if(country=="pakistan")
 {discount=price-0.05*price;
 cout<<"price after discount="<<discount<<endl;
 }
 if(country=="ireland")
 {
 discount=price-0.10*price;
 cout<<"price after discount="<<discount<<endl;
 }
 if(country=="india")
 {
 discount=price-0.20*price;
 cout<<"price after discount="<<discount<<endl;
 }
 if(country=="england")
 {
 discount=price-0.30*price;
 cout<<"price after discount="<<discount<<endl;
 }
 if(country=="canada")
 {
 discount=price-0.45*price;
 cout<<"price after discount="<<discount<<endl;
 }
  }
}
