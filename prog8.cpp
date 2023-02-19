#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main ()
{
	int a,b,c,x;
	double po,ne,ans,ans1;
	cout<<"the value of a is"<<"\n";
	cin>>a;
	cout<<"the value of b"<<"\n";
	cin>>b;
	cout<<"the value of c"<<"\n";
	cin>>c;
	x=(b*b) -(4*a*c);
	po=(-b+sqrt(x));
	ne=(-b-sqrt(x));
	ans=po/2*a;
	ans1=ne/2*a;
	cout<<ans<<"\n";
	cout<<ans1<<"\n";
	getch();
	
}
