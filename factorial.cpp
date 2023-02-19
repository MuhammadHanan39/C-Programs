//program to generate factorial
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,fact,j;
	cout<<"enter the number to do factorial"<<"\n";
	cin>>n;
	fact=1;
	for( j=n;j>0;j--)
	{
		fact*=j;
	}
	cout<<fact;
	getch();
}

