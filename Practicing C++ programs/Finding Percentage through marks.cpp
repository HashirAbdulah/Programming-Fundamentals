#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float total,obtained;
	float percentage;
	cout<<"Enter total marks= ";
	cin>>total;
	cout<<"Enter obtained marks= ";
	cin>>obtained;
	percentage=obtained/total*100;
	cout<<"The Percentage is = "<<percentage<<endl;
	return 0;
}
