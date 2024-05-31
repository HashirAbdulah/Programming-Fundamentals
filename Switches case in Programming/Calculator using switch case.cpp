#include<iostream>
using namespace std;
int main()
{
	char c;
	int a,b;
	cout<<"Enter two Numbers:"<<endl;
	cin>>a;
	cin>>b;
	cout<<"enter any mathematical charachter +,-,/,* :"<<endl;
	cin>>c;
	switch (c)
	{
		case '+':
			cout<<"Sum:"<<a+b<<endl;
			break;
			case '-':
				cout<<"Substraction"<<a-b<<endl;
				break;
				case '*':
				cout<<"Multiplication"<<a*b<<endl;
				break;
				case '/':
					cout<<"Division"<<endl;
					if (b==0)
					cout<<"Dvision error because 0 is in denominator"<<endl;
					cout<<"Division"<<a/b<<endl;
					break;
					default:
						cout<<"Invalid Numbers or logic"<<endl;
	}
	return 0;
}
