#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char type;
	int s,T_s,p,j,b,t;//s is for shirt ,ts is for T_shirt,pis for pants,j for jeans,b for belt,t for ties//
	cout<<"\t\t\t Welcome TO Diners!"<<"\n";
	cout<<"Enter Customer Type Registered=R, Normal=N"<<"\n";
	cin>>type;
	cout<<"Enter the number of Shirt you purchased :";
	cin>>s;
	cout<<"Enter the number of T_short you purchased :";
	cin>>T_s;
	cout<<"Enter the number  of Dress pants you purchased :";
	cin>>p;
	cout<<"Enter the number of jeans you purchased :";
	cin>>j;
	cout<<"Enter the number of Belts you purchased :";
	cin>>b;
	cout<<"Enter the number of Ties you purchased :";
	cin>>t;
	if(type=='R')
	{
		int shirt=s*1750;
		int T_shirt=T_s*1550;
		int pant=p*2100;
		int jeans=j*4500;
		int belt=b*2150;
		int tie=t*1100;
		int Actual_bill=shirt+T_shirt+pant+jeans+belt+tie;
		cout<<"Actual Bill = Rs."<<Actual_bill<<"\n";
		int bill_after_discount=(shirt*50)/100 + (T_shirt*50)/100 + (pant*60)/100 + (jeans*70)/100 + (belt*60)/100 + (tie*60)/100;
		cout<<" Total Bill after discount = Rs."<<bill_after_discount<<"\n";
		
	}
	else if(type=='N')
	{
		int shirt=s*1750;
		int T_shirt=T_s*1550;
		int pant=p*2100;
		int jeans=j*4500;
		int belt=b*2150;
		int tie=t*1100;
		int Actual_bill=shirt+T_shirt+pant+jeans+belt+tie;
		cout<<"Actual Bill = Rs."<<Actual_bill<<"\n";
		int bill_after_discount=(shirt*70)/100 + (T_shirt*70)/100 + (pant*80)/100 + (jeans*90)/100 + (belt*80)/100 + (tie*80)/100;
		cout<<"Total bill after discount = Rs."<<bill_after_discount<<"\n";
	}
	getch();
}
