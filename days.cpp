#include<iostream>
using namespace std;



main()
{ 
int holidays,days,games,diff;
cout<<"holidays:";
cin>>holidays;
days=365-holidays;
games=days*63+holidays*127;
diff=30000-games;

cout<<"tom sleeps well (in minutes)="<<diff;

}