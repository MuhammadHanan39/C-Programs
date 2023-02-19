#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int radius,no_of_rounds;
	cout<<"enter the radius:"<<"\n";
	cin>>radius;
	cout<<"enter thhe no:of rounds"<<"\n";
	cin>>no_of_rounds;
	float pi=3.14;
	float distance;
	distance= 2*pi*radius*no_of_rounds;
	cout<<"distance is:"<<"\n"<<distance;
	getch();
}
