#include<iostream>
using namespace std;
int main()
{
	int matrixA[2][2]={{1,2},{2,1}};
	int matrixB[2][2]={{3,4},{2,3}};
	int matrixC[2][2];
	for(int i=0;i<=1;i++)
	{
		for(int j=0;j<=1;j++)
		matrixC[i][j]=matrixA[i][j]*matrixB[i][j];
	}
	for(int k=0;k<=1;k++)
	{
		for(int l=0;l<=1;l++)
		{
			cout<<matrixC[k][l];
		}
	cout<<endl;
	}
	
}
