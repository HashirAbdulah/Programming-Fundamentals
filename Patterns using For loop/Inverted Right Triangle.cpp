#include<iostream>
using namespace std;
int main()
{
	for (int i=1;i<=4;i++)
{
		for(int s=1;s<=i-1;s++)
		  cout<<" ";
	
	  for(int j=i;j<=4;j++)
	{
		cout<<"*";
	}
	cout<<endl;
	}
}
