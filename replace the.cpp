#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string text;
	cout<<"enter the text :\n";
	getline(cin,text,'&');
	int index=text.find("the");
	while(index!=string::npos)
	{
		text=text.replace(index,3,"");
		index=text.find("the",index+1);
	}
	cout<<text;
	return 0;
}
