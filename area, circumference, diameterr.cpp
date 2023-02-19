#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int angle, r;//r is the radius of circle//
	float pi=3.14;
	float diameter,circumference,area;
	cout<<"enter the value of radius:"<<"\n";
	cin>>r;
	cout<<"enter the angle:"<<"\n";
	cin>>angle;
	diameter=r*angle;
	cout<<"the value of diameter is:"<<"\n"<<diameter<<"\n";
	circumference=2*pi*r;
	cout<<"the value of circumference is:"<<"\n"<<circumference<<"\n";
	area=pi*r*r;
	cout<<"the value of area is:"<<"\n"<<area;
	getch();
}
