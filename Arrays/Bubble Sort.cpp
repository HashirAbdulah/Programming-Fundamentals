#include<iostream>
using namespace std;
int main()
{
	int a[5],i,j,temp;
	cout<<"Enter values in an array: "<<endl;
	for(i=0;i<=4;i++)
	{
	cin>>a[i];
    }
    cout<<"You Entered: ";
    	for(i=0;i<=4;i++)
    	{
    		cout<<" "<<a[i];
		}
 	//sorting started from here
		for(i=0;i<=4;i++)
		{
		for(j=0;j<=3;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	} 
		cout<<endl<<"Sorted Arrays: ";
			for(i=0;i<=4;i++)
		{
			cout<<" "<<a[i];
		}
}
