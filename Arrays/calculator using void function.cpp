#include<iostream>
using namespace std;
void add();
void sub();
void divide();
void multiply();
void average();
int main()
{
	//function call
	add();
	sub();
	divide();
	multiply();
	average();
}
void add()
{
	cout<<"You Are in Addition Function"<<endl;
	float a,b;
    cout<<"================================"<<endl;
	cout<<"Enter values in A and B:"<<endl;
	cin>>a>>b;
	float sum=a+b;
	cout<<"Sum: "<<sum<<endl;
}
void sub()
{
	cout<<"================================"<<endl;
	cout<<"You Are in Subtraction Function"<<endl;
	float a,b;
	cout<<"Enter values in A and B:"<<endl;
	cin>>a>>b;
    float sub=a-b;
	cout<<"Subtraction:"<<sub<<endl;
}
void divide()
{
	cout<<"================================"<<endl;
	cout<<"You Are in Divide Function"<<endl;
	float a,b;
	cout<<"Enter values in A and B:"<<endl;
	cin>>a>>b;
	float divide=a/b;
	cout<<"Divide:"<<divide<<endl;
}
void multiply()
{
	cout<<"================================"<<endl;
	cout<<"You Are in Multiplication Function"<<endl;
	float a,b;
	cout<<"Enter values in A and B:"<<endl;
	cin>>a>>b;
	float multiply=a*b;
	cout<<"Multiply:"<<multiply<<endl;
}
void average()
{
    cout<<"================================"<<endl;	
	cout<<"You are in Average Function"<<endl;
	float a,b;
	cout<<"Enter values of A and B: "<<endl;
	cin>>a>>b;
	float average=(a+b)/2;
	cout<<"Average: "<<average<<endl;
}
