#include<iostream>
using namespace std;
int main()
{
	for(int i=7;i>=1;i--)
	{
		for(int j=7;j>=i;j--)
		cout<<"*";
		cout<<endl;
	}
	return 0;
}
