#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int elapsed_second;
	cout<<"enter the elapsed second:"<<"\n";
	cin>>elapsed_second;
	int hour=elapsed_second/3600;
	elapsed_second=elapsed_second-(hour*3600);
	int min=elapsed_second/60;
	int second=elapsed_second-(min*60);
	cout<<"elapsed time in hour,min and second are:"<<"\n"<<hour<<":"<<min<<":"<<second;
	getch();

}
