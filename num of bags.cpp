#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int one_metric_ton=2205;
	int amount_of_rice;
	cout<<"enter the amount of rice in a bag:"<<"\n";
	cin>>amount_of_rice;
	float num_of_bags;
	num_of_bags=one_metric_ton/amount_of_rice;
	cout<<"the num:of bags needed to store one metric ton of rice are:"<<"\n"<<num_of_bags;
	getch();
	
}
