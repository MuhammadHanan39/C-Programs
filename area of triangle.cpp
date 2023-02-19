#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int base,height;
	float area;
	cout<<"Enter the base of triangle:"<<"\n";
	cin >>base;
	cout<<"Enter the height of triangle:"<<"\n";
	cin>>height;
	area=(base*height)/2;
	cout<<"Area of triangle is:"<<"\n"<<area;
	getch();
}
