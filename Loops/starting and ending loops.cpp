#include<iostream>
using namespace std;
int main() 
{
    int start, end;
    int count = 0;
    cout<<"Enter the starting value: ";
    cin>>start;

    cout<<"Enter the ending value:";
    cin>>end;
   
    int new_number=start;
    while (new_number<= end) {
        if (new_number% 2 != 0) {
            count++;
        }
        else if (start > end) {
        cout<<"Invalid range.";}
       new_number++;
    }
    cout<<"Count of odd numbers between "<<start<<" and "<<end<< " : "<<count<<endl;

    return 0;
}

