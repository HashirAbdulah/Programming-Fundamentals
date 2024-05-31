#include<iostream>
using namespace std;
#define k 900
int main ()
{
	double force,mass1,mass2,radius;
	cout<<"Enter mass 1= "<<endl;
	cin>>mass1;
	cout<<"Enter mass 2="<<endl;
	cin>>mass2;
	cout<<"Enter radius= "<<endl;
	cin>>radius;
	force=k*mass1*mass2/radius;
	cout<<"Value of force is= "<<force<<endl;
	return 0;
}
