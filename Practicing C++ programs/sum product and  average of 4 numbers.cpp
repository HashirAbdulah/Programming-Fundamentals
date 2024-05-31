#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,b,c,d,sum,product;
	float avg;
	cout<<"First number= ";
	cin>>a;
	cout<<"Second number= ";
	cin>>b;
	cout<<"Third number= ";
	cin>>c;
	cout<<"Fourth number= ";
	cin>>d;
	sum=a+b+c+d;
	product=a*b*c*d;
	avg=sum/4.0;
	cout<<"Sum of numbers= "<<sum<<endl;
	cout<<"Product of numbers= "<<product<<endl;
	cout<<"Average= "<<avg<<endl;
	return 0;
	
}
