#include<iostream>
using namespace std;
int main()
{
	int i=1,sum=0;
	int product=1;
	int num;

	while (i<=20)
	{
			cout<<"Enter any number:"<<endl;
	cin>>num;
		sum=sum+num;
		product=product*num;
		i++;
	}
	cout<<"Sum: "<<sum<<endl;
	cout<<"Product: "<<product<<endl;
	return 0;
}
