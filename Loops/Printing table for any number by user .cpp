#include<iostream>
using namespace std;
int main()
{
	int length,num;
	cout<<"Enter the number:"<<endl;
	cin>>num;
	cout<<"Enter the Length of table: "<<endl;
	cin>>length;
	for (int i=1;i<=length;i++)
	cout<<num<<"*"<<i<<"="<<num*i<<endl;
	
}
