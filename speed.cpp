#include<iostream>
using namespace std;

main()
{
 int speed;
 cout<<"enter speed:";
 cin>>speed;
 if(speed<100)
 {
 cout<<"Perfect! you're going good.";
 }
 if(speed>100)
 {
 cout<<"Halt...YOU WILL BE CHALLENGED";
 }
 if(speed==100)
 cout<<"Perfect! you're going good.";
}