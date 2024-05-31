#include<iostream>
using namespace std;
int main()
{
	cout<<"Addition of numbers like 1+2+4+8+16"<<endl;
	int sum=0;
	for (int i=1;i<=16;i*=2)
{
	cout<<i<<endl;
	sum+=i;
}
cout<<"Sum: "<<sum<<endl;	
}
