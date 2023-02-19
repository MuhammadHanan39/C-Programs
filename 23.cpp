#include<iostream>
using namespace std;
int swap(int& num,int& num1,int& num2)
{
	num=num1;
	num1=num2;
	num2=num;
	return(num1,num2);
}int main()
{
	int num;
	int num1=1;
	int num2=2;
	cout<<swap(num,num1,num2);
	
}
