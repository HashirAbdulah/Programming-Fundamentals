#include <iostream>
using namespace std;
int main()
{
   int num, min, max, i= 1;
   cout<<"Enter number: "<<i<<endl;
   cin>>num;
   min=num;
   max=num;
   while (i<=10) 
   {
      i++;
      cout<<"Enter number: "<<i<<endl;
      cin>>num;
      if (num < min) {
         min=num;
      }
      else if (num>max) 
	  {
         max=num;
      }
   }
   cout<<"Minimum number: "<<min<<endl;
   cout<<"Maximum number: "<<max<<endl;

   return 0;

}
