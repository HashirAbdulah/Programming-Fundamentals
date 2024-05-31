#include<iostream>
using namespace std;
int main()
{
	int a[2][4]={{12,21,9,84},{15,5,32,4}};
	int i,j,min,max;
	max=a[0][0];
	min=max;
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=3;j++)
		{
		if(a[i][j]>max);
			max=a[i][j];
		if(a[i][j]<min)
			min=a[i][j];	
	}
	cout<<"Maximum:"<<max<<endl;
	cout<<"Minimum:"<<min<<endl;
	}
}
