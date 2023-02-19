#include<iostream>
using namespace std;
int main()
{
	int array1[3][3],array2[3][3],result[3][3];
	cout<<"enter the values of matrix A :\n";
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
	cin>>array1[i][j];
	cout<<"enter the values of matirx B :\n";
	for(int k=0;k<3;k++)
	for(int l=0;l<3;l++)
	cin>>array2[k][l];
	for(int m=0;m<3;m++)
	for(int n=0;n<3;n++)
	result[m][n]=array1[m][n]+array2[m][n];
	cout<<"result after addition is :\n";
	for(int o=0;o<3;o++){
	for(int p=0;p<3;p++)
	cout<<result[o][p]<<"\t";
	cout<<endl;
	}
	return 0;
}
