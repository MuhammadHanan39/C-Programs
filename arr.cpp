#include<iostream>
using namespace std;
int main()
{
	int num;
	int nums[10];
	bool found=true;
	int index;
	for(int i=0;i<10;i++)
	{
		cout<<"enter the item number"<<i+1<<" :";
		cin>>nums[i];
	}
	cout<<"enter the number you want to find: ";
	cin>>num;
	for(int i=0;i<10;i++)
	{
		if(nums[i]==num)
		cout<<"the is at location :"<<index;
	else
	cout<<"item not found";
}
	return 0;
}
