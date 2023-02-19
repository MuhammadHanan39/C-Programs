#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	cout<<"Welcome To INDUS CAFE "<<"\n";
	cout<<"enter the starting time of service:"<<"\n";
	int hour;
	float min,second;
	cout<<"enter the time"<<"\n"<<"hour:"<<"\n";
	cin>>hour;
	cout<<"min:"<<"\n";
	cin>>min;
	int first_hour,second_hour,rest_hours;
	cout<<"second"<<"\n";
	cin>>second;
	cout<<"enter the ending point"<<"\n";
	int hour1,min1,second1;//these are for ending points
	cin>>hour1>>min1>>second1;
	
	float ceil_time_used;
	 ceil_time_used=ceil(hour1-hour+(min1-min)/60+(second1-second)/3600 );
	cout<<"client had used the service for"<<ceil_time_used<<"hour"<<"\n";
	if(ceil_time_used>0 && ceil_time_used<=1)
	{
		int first_hour=20;
		cout<<"client is charged: Rs."<<first_hour<<"\n";
	}
	else if(ceil_time_used>1 && ceil_time_used<=2)
	{
		int second_hour=35;
		cout<<"client is charged: Rs."<<second_hour<<"\n";
	}
	else if(ceil_time_used>2)
	{
		int n=ceil_time_used-2;
		int client_charged=35+n*10;
		cout<<"client is charged: Rs."<<client_charged;
	}
	getch();
}
