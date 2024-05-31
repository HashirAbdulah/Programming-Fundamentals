#include<iostream>
using namespace std;
int main() 
{ 
   int num,product=1,i=1;
   cout<<"Enter number:";
   cin>>num;
    while(i<=num){
	
     product=product*i;
i++;
}
cout<<"The product of numbers from 1 to "<<num<<" is: "<<product<<endl;
return 0;
}

