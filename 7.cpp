#include<iostream>
using namespace std;
struct time
{
	int hours;
	int minutes;
	int seconds;
	int totalseconds;
};
int main()
{
	cout<<"enter the time in hours, minutes and seconds\n";
	cin>>time.hours;cout<<":";cin>>time.minutes;cout<<":";cin>.time.seconds;
	time.totalseconds=(time.hours)/3600+(time.minutes)/60+time.seconds;
	cout<<"total time"<<time.totalseconds;
}
