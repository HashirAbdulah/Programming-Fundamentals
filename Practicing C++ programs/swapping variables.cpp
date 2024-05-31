#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Give variable 'a' a value ="<<endl;
	cin>>a;
	cout<<"give variable 'b' a value ="<<endl;
	cin>>b;
	cout<<"value before swapping:a = "<<a<<", b =" <<b<<endl;
	
	temp=a;
	a = b;
    b = temp;
    cout << "After swapping: a = " << a << ", b = " << b << endl;
	return 0;
}
