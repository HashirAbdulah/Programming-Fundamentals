#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int countch=0;
	int countw=1;
	int ch='a';
	cout <<"Enter a sentence"<<endl;
	while (ch!='\r')
{
		ch=getche();
		if(ch==' ')
	       countw++;
    	else
        	countch++;
			}
	
	cout <<"wordscount"<<"="<<countw<<endl;
	cout <<"Charactercount"<<"="<<countch--<<endl;
	getch();
}
