#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int hour,min,seconds;
	cout<<"enter the time in hour:"<<"\n";
	cin>>hour;
	cout<<"enter the time in min:"<<"\n";
	cin>>min;
	cout<<"enter the time in seconds"<<"\n";
	cin>>seconds;
	int elapsed_time_in_seconds;
	elapsed_time_in_seconds=(hour*3600)+(min*60)+seconds;
	cout<<"eleapsed time in seconds is:"<<"\n"<<elapsed_time_in_seconds;
	getch();
}
