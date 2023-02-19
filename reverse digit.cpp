#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int ReverseDigit(char A[100])
{
	for(int i=(strlen(A)-1);i>=0;i--)
	{
	cout<<A[i];}
}
int main()
{
	char A[100];
	cout<<"enter the digits :  ";
	cin.get(A,100);
	cout<<"reverse digits are :  ";
	ReverseDigit(A);
	return 0;
}
