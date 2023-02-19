#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
	cout<<"enter the character:"<<"\n";
	cin>>ch;
	char vowel='a'||'e'||'i'||'o'||'u';
	switch (ch)
	{
		case vowel:
		cout<<"character is vowel"<<"\n";
		break;
		case !vowel:
			cout<<"character is consonent"<<"\n";
			break;
	}
	getch();
}
