#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num;
	int  sum=0;
	cout<<"enter the num:"<<"\n";
	cin>>num;
	while (num>=100 && num<=200)
	{
		sum+=num;
		cout<<"enter the number"<<"\n";
		cin>>num;
	}
	cout<<"sum of numbers is = "<<sum;
	getch();
}
