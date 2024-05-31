#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int key,d=-1;
	int num[10];
	cout<<"Enter Key For finding Index:";
	cin>>key;
	for (int i=0;i<=9;i++)
	{
		cout<<"Enter the values in arrays: "<<endl;
		cin>>num[i];
	}
	for (int i=0;i<=9;i++)
	{
		if(num[i]==key)
		{
			d=i;
			break;
		}
	}
		if(d==-1)
		{
			cout<<"Key Not Found"<<endl;
		}
		else
		{
			cout<<"Value Found at index:"<<d<<endl;
		}
	}
