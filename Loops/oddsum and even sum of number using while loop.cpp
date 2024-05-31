#include<iostream>
using namespace std;
int main()
{
	int num,i=1,evensum=0,oddsum=0;

	while (i<=10)
{
	
	cout<<"Enter any number:";
	cin>>num;
		if (i%2==0)
	{
			evensum=evensum+i;
		 cout<<"Evensum:"<<evensum<<endl;
		 }
	
     else  (i%2!=0)

	 
	 oddsum=oddsum+i;
	  cout<<"oddsum:"<<oddsum<<endl;
	
   
    i++;
}
    
return 0;

	
}
