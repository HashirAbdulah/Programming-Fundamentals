#include<iostream>
using namespace std;
int main() 
{
	int num,sum=0,i=1;
   cout<<"Enter number:";
   cin>>num;
    while(i<=num){
	
     sum=sum+i;
i++;
}
cout<<"The sum of numbers from 1 to "<<num<<" is: "<<sum<<endl;
return 0;
}
