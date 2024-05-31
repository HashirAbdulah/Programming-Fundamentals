#include <iostream>
int main() {
int num;
    int input;
 cout<<"Enter numbers (enter a negative number to stop)";
cin>>input;
    while (true) {
   

        if (input < 0) 
		{
            break;
        }
        cin>>input;
    }
    

    return 0;
}

