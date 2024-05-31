#include<iostream>
#include<ctime> // library for srand(time(0))
using namespace std;
int main() 
{
    srand(time(0)); // Random number generator with current time
    int secretNumber=rand()%100+1; // Generate a random number between 1 and 100
    int guess;
    int attempts;
    const int maxattempts=3;
    cout<<"Welcome to the Number Guessing Game"<<endl;
    cout<<"I'm thinking of a number between 1 and 100"<<endl;
    do 
	{
        cout<<"Enter your guess: ";
        cin>>guess;
        attempts++;
        if(guess>secretNumber) 
		{
            cout<<"Too high! Try again"<<endl;
        } 
		else if(guess<secretNumber) 
		{
            cout<<"Too low! Try again"<<endl;
        } 
		else 
		{
            cout<<"Congratulations! You guessed the number in "<<attempts<<" attempts!"<<endl;
        }
    } 
	while (guess!=secretNumber);
    
    return 0;
}
