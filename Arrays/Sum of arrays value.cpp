#include<iostream>
using namespace std;
int main()
{
	float sum=0;
	float num[20];
	for(int i=0;i<=19;i++)
	{
		cout<<"Enter the Numbers: "<<endl;
		cin>>num[i];
		sum=num[i]+sum;
	}
	{
		cout<<"Sum"<<sum<<endl;
	}
	return 0;
}
