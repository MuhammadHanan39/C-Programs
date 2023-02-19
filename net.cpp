#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,n1;
	int sum=0;
	cout<<"enter the number of values remaining to be entered:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"enter the number:";
		cin>>n1;
		sum+=n1;
	}
	cout<<"sum of remaining entered numbers are: "<<"\n"<<sum;
	return 0;
}
