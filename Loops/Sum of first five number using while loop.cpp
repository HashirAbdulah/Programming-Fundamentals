#include<iostream>
using namespace std;
int main()
{
	int num,i=1,sum=0;
		cout<<"Enter any Number less than 5:"<<endl;
		cin>>num;
	while (i<=5)
	{
	
		sum=sum+num;
		i++;
	}
	cout<<"Sum:"<<sum<<endl;
	return 0;
}
