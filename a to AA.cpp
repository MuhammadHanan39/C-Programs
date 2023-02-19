#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string text;
	cout<<"enter the text \n";
	getline(cin,text,'&');
	int index=text.find('a');
	while(index!=string::npos)
	{
		text=text.replace(index,1,"AA");
		index=text.find('a',index+1);
	}
	cout<<text;
}
