#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char name1[7][11]={"monday","tuesday"}
	char name2[20];
	cout<<"enter name 1\n";
	cin.get(name1,20);
	cin.sync();
	cout<<"enter name 2\n";
	cin.get(name2,20);
	strcmp(name1,name2);
	if(strcmp(name1,name2) <0)
	cout<<"name1 is smaller :";
	else if (strcmp(name1,name2) >0)
	cout<<"name1 is greater";
	else 
	cout<<"both are equal";
	return 0;
}
