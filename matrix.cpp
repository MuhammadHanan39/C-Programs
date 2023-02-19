#include<iostream>
using namespace std;
int main()
{
	int A[5],B[5];
	cout<<"enter the value of A :";
	for(int i=0;i<5;i++)
	{
		cin>>A[i];
	}
	cout<<"enter the value of B :";
	for(int j=0;j<5;j++)
	{
		cin>>B[j];
	}
	for(int k=0;k<5;k++)
	{
		for(int l=0;l<B[k];l++)
		cout<<A[k];
		cout<<endl;
	}
	
}
