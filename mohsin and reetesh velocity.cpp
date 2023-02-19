#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int ground_A_diameter=15;
	float pi=3.14;
	int ground_B_diameter=20;
	int mohsin_time;
	cout<<"enter the time taken by mohsin:"<<"\n";
	cin>>mohsin_time;
	int neetesh_time;
	cout<<"enter the time taken by the neetesh:"<<"\n";
	cin>>neetesh_time;
	int mohsin_velocity=(ground_A_diameter*pi)/mohsin_time;
	cout<<"velocity of mohsin is:"<<"\n"<<mohsin_velocity<<"\n";
	int neetesh_velocity=(ground_B_diameter*pi)/neetesh_time;
	cout<<"velocity of neetesh is:"<<"\n"<<neetesh_velocity<<"\n";
	if(mohsin_velocity>neetesh_velocity)
	{
		cout<<"mohsin is faster than neetesh";
	}
	else if(neetesh_velocity>mohsin_velocity)
	{
		cout<<"neetesh is faster than mohsin";
	}
	else
	{
		cout<<"they are equal.";
	}
	getch();
}
