#include<iostream>
#include<conio.h>
using namespace std;
void print(int begin)
{
	cout<<begin;
	if(begin<9)
	{
		print(begin + 1);
	}
	cout<<begin;
}
int main()
{
	int begin=1;
	print(begin);
}
