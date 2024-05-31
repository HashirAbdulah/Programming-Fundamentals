#include<iostream>
using namespace std;
int main()
{
	int num,sum=0,mid;
	cout<<"Enter the number:"<<endl;
	cin>>num;
	mid=num/2;
	for(int i=1;i<=mid;i++)
	{
		if (num%i==0)
		sum=sum+i;
	}
	if(sum==num)
	{
	
	cout<<"The number is a perfect number"<<endl;
}
else 
{
		cout<<"The Number is Nulla Berozgar"<<endl;
}
return 0;
}
