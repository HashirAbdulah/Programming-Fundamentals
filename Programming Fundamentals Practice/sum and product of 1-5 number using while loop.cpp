#include<iostream>
using namespace std;
int main()
{
	int i=1;
	int sum=0;
	int product=1;
	while (i<=5)
	{
		sum=sum+i;
		i++;
		cout<<"Sum: "<<sum<<endl;
		product=product*1;
		cout<<"Product: "<<product<<endl;
		i++;
	}
	return 0;
}
