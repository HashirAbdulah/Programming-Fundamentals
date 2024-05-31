#include<iostream>
using namespace std;
int main()
{

float principal, rate, time, interest;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter rate of interest (in %): ";
    cin >> rate;

    cout << "Enter time (in years): ";
    cin >> time;

    interest = (principal * rate * time) / 100;

    cout << "Simple interest = " << interest << endl;
	}

