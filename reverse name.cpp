#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char text[10];
	char text2[10];
	cout<<"enter your name : ";
	cin>>text;
	for(int i=(strlen(text)-1);i>=0;i--)
	{
	cout<<text[i];
	}
}


