#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the first number:";
	cin>>a;
	cout<<"Enter the second number:";
	cin>>b;
	cout<<"Enter the third number:";
	cin>>c;
	if(	a*a==(b*b+c*c))
	{
		cout<<"it is right angle triangle"<<a*a;
	}
	else if(b*b==(a*a+c*c))
	{
		cout<<"it is right triangle triangle";
	}
	else if(c*c==(a*a+b*b))
	{
		cout<<"it is right angle triangle";
	}
	else
	{
		cout<<"it is not  right angle triangle";
	}
	getch();
 } 
