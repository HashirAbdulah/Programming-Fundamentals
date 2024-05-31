#include<iostream>
using namespace std;
int main()
{
	int i=1,sum=0,num;
	do
	{
		cout<<"Enter any number: ";
		cin>>num;
		sum=sum+num;
		i++;
	}
	while (i<=5);
	cout<<"Sum:" <<sum<<endl;
	return 0;
}
