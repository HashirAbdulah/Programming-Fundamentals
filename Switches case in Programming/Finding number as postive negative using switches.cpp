#include<iostream>
using namespace std;
int main()
{
	int num;
	char alphabet;
	cout<<"Enter any number:";
	cin>>num;
	if(num>0)
	cout<<"The number is postive"<<endl;
	else if (num<0)
	cout<<"The number is negative"<<endl;
	else
	cout<<"The number is Zero"<<endl;
	
	cout<<"Enter any ALphabet: "<<endl;
	cin>>alphabet;
	
	switch (alphabet)
	{
	case 'a':
		cout<<"The Alphabet is a vowel"<<endl;
		break;
		case 'A':
		cout<<"The Alphabet is a vowel"<<endl;
		break;
		case 'e':
		cout<<"The Alphabet is a vowel"<<endl;
		break;
		case 'E':
		cout<<"The Alphabet is a vowel"<<endl;
		break;
		case 'i':
		cout<<"The Alphabet is a vowel"<<endl;
		break;
		case 'I':
		cout<<"The Alphabet is a vowel"<<endl;
		break;
		case 'o':
		cout<<"The Alphabet is a vowel"<<endl;
		break;
		case 'O':
		cout<<"The Alphabet is a vowel"<<endl;
		break;
		case 'u':
		cout<<"The Alphabet is a vowel"<<endl;
		break;
		case 'U':
		cout<<"The Alphabet is a vowel"<<endl;
		break;
		default:
			cout<<"The Alpabet is a consonent"<<endl;
		}
		return 0;
			
}
