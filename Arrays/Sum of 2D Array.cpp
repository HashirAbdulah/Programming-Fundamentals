#include<iostream>
using namespace std;
int main()
{
	int arr[4][5];
	int i,j;
	int sum=0;
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=4;j++)
		{
		cout<<"Enter values in array"<<endl;
		cin>>arr[i][j];
		sum=sum+arr[i][j];
	}
	}
	cout<<"Sum of Arrays: "<<sum<<endl;
}
