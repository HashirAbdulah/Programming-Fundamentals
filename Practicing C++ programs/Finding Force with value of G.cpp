#include<iostream>
using namespace std;
#define g 9.807
int main()
{
	double mass,force;
	cout<<"Mass of body"<<endl;
	cin>>mass;
	force=mass*g;
	cout<<"Value of force="<<force<<endl;
	return 0;
}
