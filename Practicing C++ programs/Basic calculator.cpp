#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	char x;
	cout<<"Enter 1st number="<<endl;
	cin>>num1;
	cout<<"Enter 2nd number="<<endl;
	cin>>num2;
	cout<<"Press a for addition="<<endl;
	cout<<"Press b for substraction="<<endl;
	cout<<"Press p for multiplication="<<endl;
	cout<<"Press d for division="<<endl;
	cout<<"Press r for reminder="<<endl;
	cin>>x;
	if (x=='a')
	cout<<"Sum="<<num1+num2<<endl;
	else if (x=='b')
	cout<<"Substraction="<<num1-num2<<endl;
	else if (x=='p')
	cout<<"Multiplication="<<num1*num2<<endl;
	else if (x=='d')
	cout<<"Division="<<num1/num2<<endl;
	else if (x=='r')
	cout<<"Reminder="<<num1%num2<<endl;
	else
	cout<<"Agy Tery Pio no ni pta="<<endl;
	
	
	return 0;
}