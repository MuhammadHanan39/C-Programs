#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	int a,b,c;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second  number: ";
	cin>>b;
	cout<<"Enter thye third number: ";
	cin>>c;
	if(a>b&&b>c)
	{
		cout<<"numbers in ascending orders are:"<<c<<b<<a;
	}
	else if(b>c&&c>a)
	{
		cout<<"numbers in ascending orders are:"<<a<<c<<b;
	}
	else if(c>b&&b>a)
	{
		cout<<"numbers in ascending orders are:"<<a<<b<<c;
	}
	else if(a>b&&a<c)
	{
		cout<<"numbers in ascending orders are:"<<b<<a<<c;
	}
	else if(a>c&&c>b)
	{
		cout<<"numbers in ascending order are"<<b<<c<<a;
	}
	else if(b>a&&a>c)
	{
		cout<<"numbers in ascending order are"<<c<<a<<b;
	}
	else 
	{
		cout<<"you enter the same number";
	}
	getch();
}
