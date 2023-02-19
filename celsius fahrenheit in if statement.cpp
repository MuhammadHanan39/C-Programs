#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float temp;
	char unit_of_temp;
	cout<<"Enter the temperature : ";
	cin>>temp;
	cout<<"Enter the unit of temperature Celsius= C or c, fehrenheit= F,f : ";
	cin>>unit_of_temp;
	if(unit_of_temp=='f'&&'F')
	{
		float celsius=5*(temp-32)/9;
		cout<<temp<<"degree fahrenheit ="<<celsius<<"degree celsius";
	}
	else if(unit_of_temp='C'&&'c')
	{
		float fahrenheit=9*(temp/5)+32;
		cout<<temp<<"degree celsius ="<<fahrenheit<<"degree fahrenheit";
	}

	getch();
}
