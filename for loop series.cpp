#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j;
	for(i=5;i<=95;i++)
	{
		if(i%2!=0&&i%5==0)
		cout<<setw(3)<<i;
	}
	getch();
}
