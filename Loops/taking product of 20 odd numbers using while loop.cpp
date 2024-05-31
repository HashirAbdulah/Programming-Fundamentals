#include<iostream>
using namespace std;
int main() 
{
	int num,product=1,i=1;
 
   while (i<=20){
   	 cout<<"Enter number:";
   cin>>num;
   
   if (num%2!=0)
   {
   product=product*num;
}
   i++;
}
  cout<<"Product of odd number is :"<<product<<endl;
return 0;
}
