#include<iostream>
using namespace std;
int main()
//Oddsum and Evensum
{
	int osum=0,esum=0;
	int i,j;
	int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			if (a[i][j]%2==0)
		    {
					esum=esum+a[i][j];
}
		 if(a[i][j]%2!=0)
		{
			osum=osum+a[i][j];
		}
	}
	}
	cout<<"Evensum:"<<esum<<endl;
	cout<<"Oddsum"<<osum<<endl;
}
	
