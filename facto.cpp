#include<iostream>
using namespace std;
int main()
{
	int n,n1;
	cout<<"enter the number of values remaining";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"enter the number";
		cin>>n1;
		if(n1<i)
		{
			cout<<"the smallest number is:"<<i;
		}
	}
	return 0;
}
