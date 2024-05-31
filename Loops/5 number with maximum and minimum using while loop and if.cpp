#include<iostream>
using namespace std;
int main()
{
	int i=1,num,min,max;
	while (i<=5)
{
		cout<<"Enter any number:";
	cin>>num;
	if (num>max)
{
		max=num;
		
		
	}
else
{
		min=num;
}
i++;
    }
	cout<<"Minimum number:"<<min<<endl;
	cout<<"Maximum number:"<<max<<endl;
}
