#include<iostream>
using namespace std;
int main()
{
	int i=1,evensum=0,oddsum=0;
	int num;
	while (i<=10)
	{
	cout<<"Enter any 1O Numbers: "<<endl;
	cin>>num;
	{
		if(i%2==0)
		{
			evensum=evensum+i;
			cout<<"EvenSum: "<<evensum<<endl;
		}
		else
		oddsum=oddsum+i;
			cout<<"OddSum: "<<oddsum<<endl;
	}
	i++;
	}
	return 0;
	
}
