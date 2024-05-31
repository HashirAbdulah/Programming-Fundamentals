#include<iostream>
using namespace std;
int main()
//Max and Minimum value of Arrays
{
	int max,min;
	int i,j;
	int a[3][4];
		max=a[0][0];
		min=max;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			cout<<"Enter value of Arrays:";
			cin>>a[i][j];
				if(max<a[i][j])
				{
					max=a[i][j];
				}
				else if(min>a[i][j])
				{
					min=a[i][j];
				}
		}
	
}
		cout<<"Maximum value:"<<max<<endl;
		cout<<"Minimum value:"<<min<<endl;
	return 0;
}
