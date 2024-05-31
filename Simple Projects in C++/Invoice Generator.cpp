#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

using namespace std;

struct Items {
    char item[20];  
    float price;     
    int qty;        
};

struct Orders {
    char customer[50]; 
    char date[50];     
    int numOfItems;    
    Items itm[50];     
};


void generateBillHeader(const char* name, const char* date) 
{
    cout << "\n\n";
    cout << "\t    MY PROJECT";
    cout << "\n\t    ---------------";
    cout << "\nDate: " << date;
    cout << "\nInvoice To: " << name;
    cout << "\n";
    cout << "----------------------------------------\n";
    cout << "Items\t\t";
    cout << "Qty\t\t";
    cout << "Total\t\t";
    cout << "\n----------------------------------------";
    cout << "\n\n";
}


void generateBillBody(const char* item, int qty, float price) {
    cout << item << "\t\t";
    cout << qty << "\t\t";
    cout << qty * price << "\t\t";
    cout << "\n";
}

void generateBillFooter(float total) {
    cout << "\n";
    float dis = 0.1 * total;
    float netTotal = total - dis;
    float cgst = 0.09 * netTotal, grandTotal = netTotal + 2 * cgst;
    cout << "----------------------------------------\n";
    cout << "Sub Total\t\t\t" << total;
    cout << "\nDiscount @10%\t\t\t" << dis;
    cout << "\n\t\t\t\t-------";
    cout << "\nNet Total\t\t\t" << netTotal;
    cout << "\nCGST @9%\t\t\t" << cgst;
    cout << "\nSGST @9%\t\t\t" << cgst;
    cout << "\n----------------------------------------";
    cout << "\nGrand Total\t\t\t" << grandTotal;
    cout << "\n----------------------------------------\n";
}

int main() {
    char saveBill = 'y', contFlag = 'y';
    char name[50];

    ofstream outFile;
    ifstream inFile;

    while (contFlag == 'y') {
        system("cls");
        float total = 0;
        int invoiceFound = 0;
        int opt, n;
        Orders ord;
        Orders order;

        cout << "\t=========== MY PROJECT ===========";
        cout << "\n\nPlease select your preferred operation";
        cout << "\n\n1. Generate Invoice";
        cout << "\n2. Show all Invoices";
        cout << "\n3. Search Invoice";
        cout << "\n4. Exit";
        cout << "\n\nYour choice:\t";
        cin >> opt;
        cin.ignore();

        switch (opt) {
        case 1:
        	
            system("cls");
            cout << "\nPlease enter the name of the customer:\t";
            cin.getline(ord.customer, 50);
            cout << "Please enter the number of items:\t";
            cin >> n;
            ord.numOfItems = n;

            for (int i = 0; i < n; i++) {
            	
                cin.ignore();
                cout << "\n\n";
                cout << "Please enter the item " << i + 1 << ":\t";
                cin.getline(ord.itm[i].item, 20);
                cout << "Please enter the quantity:\t";
                cin >> ord.itm[i].qty;
                cout << "Please enter the unit price:\t";
                cin >> ord.itm[i].price;
                total += ord.itm[i].qty * ord.itm[i].price;
            }

            generateBillHeader(ord.customer, ord.date);
            for (int i = 0; i < ord.numOfItems; i++) {
                generateBillBody(ord.itm[i].item, ord.itm[i].qty, ord.itm[i].price);
            }
            generateBillFooter(total);
            cout << "\nDo you want to save the invoice [y/n]:\t";
            cin >> saveBill;

            if (saveBill == 'y') {
            	
                outFile.open("RestaurantBill.dat", ios::binary | ios::app);
                outFile.write(reinterpret_cast<const char*>(&ord), sizeof(Orders));
                cout << "\nSuccessfully saved";
                outFile.close();
            }
            break;

        case 2:
        	
            system("cls");
            inFile.open("RestaurantBill.dat", ios::binary);
            cout << "\n  ***** Your Previous Invoices *****\n";
            while (inFile.read(reinterpret_cast<char*>(&order), sizeof(Orders))) {
                float tot = 0;
                generateBillHeader(order.customer, order.date);
                for (int i = 0; i < order.numOfItems; i++) {
                    generateBillBody(order.itm[i].item, order.itm[i].qty, order.itm[i].price);
                    tot += order.itm[i].qty * order.itm[i].price;
                }
                generateBillFooter(tot);
            }
            inFile.close();
            break;

        case 3:
        	
            cout << "Enter the name of the customer:\t";
            cin.ignore();
            cin.getline(name, 50);
            system("cls");
            inFile.open("RestaurantBill.dat", ios::binary);
            cout << "\t***** Invoice Of " << name << " *****\n";
            while (inFile.read(reinterpret_cast<char*>(&order), sizeof(Orders))) {
                float tot = 0;
                if (!strcmp(order.customer, name)) {
                    generateBillHeader(order.customer, order.date);
                    for (int i = 0; i < order.numOfItems; i++) {
                        generateBillBody(order.itm[i].item, order.itm[i].qty, order.itm[i].price);
                        tot += order.itm[i].qty * order.itm[i].price;
                    }
                    generateBillFooter(tot);
                    invoiceFound = 1;
                }
            }
            inFile.close();
            if (!invoiceFound) {
                cout << "\nSorry the invoice for " << name << " does not exist\n\n";
            }
            break;

        case 4:
        
            cout << "\n\n\t\t Bye Bye :)\n";
            exit(0);
            break;

        default:
            cout << "Sorry invalid option";
            break;
        }

        cout << "\nDo you want to perform another operation?[y/n]:\t";
        cin >> contFlag;
    }

    cout << "\n\n\t\t Bye Bye :)\n\n";
    cout << "\n\n";

    return 0;
}
