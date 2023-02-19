#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=5;i++)
	{
		cout<<"\n";
		for(int j=7;j>=i-4;j--)
		cout<<" *";
	}
	return 0;
}
