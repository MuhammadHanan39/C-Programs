#include<iostream>
using namespace std;
int swapping(int swap,int swap1,int swap2)
{
	swap=swap1;
	swap1=swap2;
	swap2=swap;
	cout<<"num 1 after swap is"<<swap1<<endl;
	cout<<"num 2 after swap is"<<swap2<<endl;
	return (swap,swap1,swap2);
}
int main()
{
	
	int num,num1,num2;
	cout<<"enter the num 1 before swap\n";
	cin>>num1;
	cout<<"enter the num 2 before swap\n";
	cin>>num2;
	swapping(num,num1,num2);
	return 0;
}
