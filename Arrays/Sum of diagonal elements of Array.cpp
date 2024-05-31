#include<iostream>
using namespace std;
int main()
{
	int matrix[4][4];
	int sum=0;
	for (int i=0;i<=3;i++) 
	{
        for (int j=0;j<=3;j++)
		{
			cout<<"Enter the values in array: "<<endl;
			cin>>matrix[i][j];
			if(i==j)
		{
			sum=sum+matrix[i][j];
		}
		 } 
		 	}
		 	cout<<"Sum of Diagonal elements:"<<sum<<endl;
}
