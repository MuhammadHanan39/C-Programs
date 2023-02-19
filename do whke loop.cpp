#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
	int total=0;
	do
	{
	cout<<"enter the character other than q : ";
	ch=getche();
	cout<<endl;
	total++;}
	while (ch!='Q'&&ch!='q');
	cout<<"total number of character are ="<<total;
	getch();
	
}
