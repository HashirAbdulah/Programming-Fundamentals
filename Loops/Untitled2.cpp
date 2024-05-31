#include<iostream>
using namespace std;
int main()
 {
   int num;
  int sum=0;
  cout<<"Enter any number: ";
  cin>>num;
  while (num>0 && num<20)
  {
  	  sum=sum+num;
  	cout<<"Enter number again: ";
  	cin>>num;
  }

  cout<<"Sum: "<<sum<<endl;
}
