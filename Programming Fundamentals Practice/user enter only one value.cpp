#include<iostream>
using namespace std;
int main()
{
	int i=1;
	int sum=0;
	int product=1;
	int num;
	cout<<"Enter any Number: "<<endl;
	cin>>num;
	while (i<=9)
	{
		sum=sum+num;
		product=product*num;
		i++;
	}
	cout<<"Sum: "<<sum<<endl;
	cout<<"Product: "<<product<<endl;
	return 0;
}
