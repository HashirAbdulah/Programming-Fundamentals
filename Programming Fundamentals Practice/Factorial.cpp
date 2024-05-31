#include<iostream>
using namespace std;
int main()
{ 

int num;
int i=1;
int f=1;

cout<<"Enter any number"<<endl;
cin>>num;
while (i<=num)
{
f=num*i;
i++;
}
cout<<"factorial of"<<num<<"is"<<f;
}
