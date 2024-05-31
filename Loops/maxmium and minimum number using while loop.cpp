#include<iostream>
using namespace std;
int main()
{
	cout<<"Only Enter 10 Numbers"<<endl;
	int num,max,min,i=1;

	min=max=num;//same number for maximum and minimum number.
	while (i<=10)
	{
		i++;	
		cout<<"Enter any 10 number: "<<endl;
	cin>>num;
		if (num>max)
		max=num;
		else if (num<min)
		min=num;
		}
		cout<<"Maximum number: "<<max<<endl;
		cout<<"Minimum number: "<<min<<endl;
		
		return 0;
}
