#include<iostream>
using namespace std;
int main()
{
	int i=1;
	int number;
	cout<<"Enter any Number:";
	cin>>number;
	do{
		cout<<number<<"*"<<i<<"="<<number*i<<endl;
	 i++;
	}
	while (i<=10);
}
