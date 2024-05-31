#include<iostream>
using namespace std;
int main()
{
	int i=1,sum=0;
	int product=1;
	int num;
	cout<<"Enter any number ranged 100:"<<endl;
	cin>>num;
	while (i<=100)
	{
		sum=sum+num;
		product=product*num;
		i++;
	}
	cout<<"Sum: "<<sum<<endl;
	cout<<"Product: "<<product<<endl;
	return 0;
}
