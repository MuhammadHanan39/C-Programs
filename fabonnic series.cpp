//write a program to generate fabonic series 0 1 1 2 3 5 8 ...
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,old,newnum,temp,j;
	cout<<"enter the number of series u want";
	cin>>n;
	old=0;
	newnum=1;
	cout<<"\t"<<old<<"\t"<<newnum;
	for (j=1;j<=n-2;j++)
	{
		temp=old+newnum;
		old=newnum;
		newnum=temp;
		cout<<"\t"<<newnum;
	}
	
	getch();
}
