#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num,boxes;//num is the number of cookies and boxes is the boxes that container contain
	cout<<"Enter number of cookies : ";
	cin>>num;
	cout<<"cookies per box is 24"<<"\n";
	cout<<"Enter boxes per container : ";
	cin>>boxes;
	int num_of_boxes=num/24;
	cout<<"number of boxes = "<<num_of_boxes<<"\n";
	int cookies_left=num%24;
	cout<<"number of cookies left over = "<<cookies_left<<"\n";
	int container=num_of_boxes/boxes;
	cout<<"number of container = "<<container<<"\n";
	int boxes_left=num_of_boxes%boxes;
	cout<<"number of boxes left over = "<<boxes_left<<"\n";
	getch();
}
