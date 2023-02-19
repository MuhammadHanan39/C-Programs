#include<iostream>
using namespace std;
int main()
{
	int A[5],B[5];
	for(int i=0;i<5;i++)
	{
		cout<<"enter the value of A number "<<i+1<<":";
		cin>>A[i];
		cout<<endl;
	}
	for(int j=0;j<5;j++)
	{
		cout<<"enter the value of B number "<<j+1<<":";
		cin>>B[j];
		cout<<endl;
	}
	for(int k=0;k<5;k++)
	{
		for(int l=0;l<B[k];l++)
		cout<<A[k];
		cout<<endl;
	}
}
