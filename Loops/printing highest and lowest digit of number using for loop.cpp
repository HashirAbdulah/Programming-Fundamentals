#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter number:"<<endl;
	cin>>num;
int	high=num%10;
int	low=num%10;
num=num/10;
for(int i=num;i>=1;i=i/10)
{
int rem=i%10;
if (rem>high)
high=rem;
if(rem<low)
low=rem;
}
cout<<"Highest Digit:"<<high<<endl;
cout<<"Lowest Digit:"<<low<<endl;
return 0;
}

