#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main ()
{
	int a,b,c,x;
	float po,ne,ans,ans1;
	cout<<"value of a is"<<endl;
	cin>>a;
	cout<<"value of b is"<<endl;
	cin>>b;
	cout<<"value of c is"<<endl;
	cin>>c;
	x=(b*b)-4*a*c;
	po=(-b+sqrt(x));
	ne=(-b-sqrt(x));
	ans=po/2*a;
	ans1=ne/2*a;
	cout<<ans<<endl;
	cout<<ans1<<endl;
	getch();
}
