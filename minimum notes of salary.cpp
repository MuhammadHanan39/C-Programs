#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int salary,notes,coins;
	float salary_in_notes;
	cout<<"cashier:- Enter the amouunt of salary"<<"\n";
	cin>>salary;
	cout<<"cashier:- which notes do you want:"<<"\n";
	cin>>notes;
	salary_in_notes=salary/notes;
	cout<<"salary in notes are:"<<"\n"<<salary_in_notes<<"\n";
	coins=salary-(notes*salary_in_notes);
	cout<<"number of coins are:"<<"\n"<<coins;
	getch();
	
}
