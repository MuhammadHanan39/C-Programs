#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	float weight_In_Kg,Height_In_Meters;
	float BMI;
	cout<<"enter the weight  in kg:"<<"\n";
	cin>>weight_In_Kg;
	cout<<"enter the height in meters"<<"\n";
	cin>>Height_In_Meters;
	BMI=weight_In_Kg/(Height_In_Meters*Height_In_Meters);
	cout<<"value of BMI is:"<<"\n"<<BMI;
	getch();
}
