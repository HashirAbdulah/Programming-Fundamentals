#include <iostream>
#include <string>

using namespace std;

struct Car 
{
    string brand;
    string model;
    double dailyRate;
};

int main() 
{
    Car cars[5]= 
	{
        {"Toyota","Grande",50.0},
        {"Honda","Civic",45.0},
        {"Kia","Sportage",10.0},
        {"Honda","City",25.0},
        {"Changan","Alsvin",45.0},
    };

    bool continueRenting=true;

    while (continueRenting) 
	{
        cout << "Available Cars:" << endl;
        for (int i = 0; i < 5; ++i) {
            cout << i + 1 << ". " << cars[i].brand << " " << cars[i].model << " - $" << cars[i].dailyRate << " per day" << endl;
        }

        int carIndex, days;

        cout << "Select a car by entering its number: ";
        cin >> carIndex;
        if (carIndex >= 1 && carIndex <= 5) {
            carIndex--;  // Adjust for zero-based index

            cout << "Enter number of days to rent: ";
            cin >> days;

            double cost=cars[carIndex].dailyRate * days;
            cout<<"You have rented a " << cars[carIndex].brand << " " << cars[carIndex].model << " for " << days << " days." << endl;
            cout<<"Total cost: $" << cost << endl;
        } else 
		{
            cout << "Invalid car index." << endl;
        }

        cout << "Do you want to rent another car? (yes/no): ";
        string response;
        cin >> response;
        continueRenting = (response == "yes" || response == "y");
    }

    cout << "Thank you for using the car rental system!" << endl;

    return 0;
}
