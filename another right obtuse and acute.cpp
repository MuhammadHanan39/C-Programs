#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int angle1,angle2,angle3;
	cout<<"enter the first angle:"<<"\n";
	cin>>angle1;
	cout<<"enter the second angle:"<<"\n";
	cin>>angle2;
	cout<<"enter the third angle:"<<"\n";
	cin>>angle3;
	int sum_of_angle=angle1+angle2+angle3;
	cout<<"sum of all the three angles is:"<<"\n"<<sum_of_angle<<"\n";
	if(sum_of_angle==90)
	{
		cout<<"the triangle is right angle"<<"\n";
	}
	else if(sum_of_angle>90)
	{
		cout<<"triangle is obtuse angle"<<"\n";
	}
	if(sum_of_angle<90)
	{
		cout<<"triangle is acute angle"<<"\n";
	}
	getch();
}
