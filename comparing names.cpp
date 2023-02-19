#include<iostream>
#include<cstring>
using namespace std;
int vowelcount(string text)
{
	int count=0;
	for(int i=0;i<text.length();i++)
	{
		if(text[i]=='a'||text[i]=='A'||text[i]=='e'||text[i]=='E'||text[i]=='i'||text[i]=='I'||text[i]=='o'||text[i]=='O'||text[i]=='u'||text[i]=='U')
		count++;
	}
	cout<<"number of vowels in text are : "<<count<<"\n";
	return count;
}
int consonent(string text)
{
	int spacecount=0;
	int consonent;
	int count=0;
	for(int i=0;i<text.length();i++)
	{
		if(text[i]=='a'||text[i]=='A'||text[i]=='e'||text[i]=='E'||text[i]=='i'||text[i]=='I'||text[i]=='o'||text[i]=='O'||text[i]=='u'||text[i]=='U')
		count++;
	}
	int spacefind=text.find(" ");
	while(spacefind!=string::npos){
		spacecount++;
		spacefind=text.find(" ",spacefind+1);
	}
	consonent=text.length()-(spacecount+count);
	cout<<"number of consonents are : "<<consonent<<"\n";
	return consonent;
}
int uppercount(string text)
{
	int count=0;
	for(int i=0;i<=text.length();i++)
	{
		if(text[i]>='A'&&text[i]<='Z')
		count++;
	}
	cout<<"number of upper case letters are :  "<<count<<"\n";
	return count;
}
int lowercase(string text)
{
	int count=0;
		for(int i=0;i<=text.length();i++)
	{
		if(text[i]>='a'&&text[i]<='z')
		count++;
	}
	cout<<"number of lower case letters are :  "<<count<<"\n";
}

int main()
{
	string text;
	cout<<"enter the text : \n";
	getline(cin,text,'.');
	vowelcount(text);
	consonent(text);
	uppercount(text);
	lowercase(text);
	return 0;
}
