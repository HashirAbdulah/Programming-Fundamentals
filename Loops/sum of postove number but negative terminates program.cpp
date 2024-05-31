#include<iostream>
using namespace std;
int main()
{
	int num,sum=0;
	
	while (num>=0)
	{
		cout<<"Enter any positive number:";
	cin>>num;
	if (num<0)
	break;
		sum=sum+num;
		cout<<"Sum:"<<sum<<endl;
		
	}
}
