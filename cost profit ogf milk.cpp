#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int milk;//milk indicates the total amount of milk in liter produced in the morning
	cout<<"enter the amount of milk in liters produced in the morning:"<<"\n";
	cin>>milk;
	float cartons;
	cartons = milk/3.78;//cartons indicates numbers of milk cartons needed to hold milk
	cout<<"num:of cartons needed are:"<<"\n"<<cartons<<"\n";
	float cost=milk*0.38;//cost is the cost of producing milk
	cout<<"cost of milk is:"<<"\n"<<cost<<"\n";
	float profit=milk*0.27;//profit is the profit in milk
	cout<<"profit of milk is:"<<"\n"<<profit<<"\n";
	getch();
	
}
