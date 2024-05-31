#include<iostream>
using namespace std;
int main()
//radians=degree*pi/180
{
	int num_in_degree=0,pi=3.14;
	double radian;
	cout<<"Enter any Number:"<<endl;
	cin>>num_in_degree;
	while (num_in_degree<=360)
{
		radian=num_in_degree*pi/180;
	cout<<num_in_degree<<radian<<endl;
	num_in_degree++;}
}
