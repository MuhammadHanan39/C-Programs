#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int index=0;
	int array[10];
	for(int i=0;i<10;i++)
	{
		cout<<"enter the integer number "<<i+1<<":";
		cin>>array[i];
		cout<<endl;
	}
	for(int j=0;j<10;j++)
	{
		if(array[j]>0)
		{
			index+=j;
			cout<<"positive integer are "<<index;
		}
		
	}
	return 0;
}
