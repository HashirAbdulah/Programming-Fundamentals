#include<iostream>
#include<string>
#include<map>
using namespace std;
struct Product 
{
    string name;
    int quantity;
    float price;
};
map<string,Product>productStock;// Global map to store the products and their details

void addProductToStock()//new product to the stock
{
	cout<<"================================"<<endl;
    Product newProduct;
    string productName;
    cout<<"Enter product name: ";
    cin.ignore();
    getline(cin,newProduct.name);
    cout<<"Enter quantity: ";
    cin>>newProduct.quantity;
    cout<<"Enter price: ";
    cin>>newProduct.price;
    productStock[newProduct.name]=newProduct;
    cout<<"Product added to stock successfully." << endl;
}

void addSalesMade() //add sales made
{
    string productName;
    int quantitySold;
    cout<<"Enter product name: ";
    cin.ignore();
    getline(cin,productName);
    cout<<"Enter quantity sold: ";
    cin>>quantitySold;
    if (productStock.find(productName)!=productStock.end()) 
    {
        // Update the product quantity in stock
        productStock[productName].quantity-=quantitySold;
        cout<<"Sales added successfully."<<endl;
    } 
    else 
    {
        cout<<"Product not found in stock."<<endl;
    }
}
void generateBill() //generate bill
{
    string productName;
    int quantitySold;

    cout<<"Enter product name: ";
    cin.ignore();
    getline(cin,productName);
    cout<<"Enter quantity sold: ";
    cin>>quantitySold;
    // Check if the product exists in stock
    if (productStock.find(productName)!=productStock.end()) 
    {
        float totalCost=productStock[productName].price*quantitySold;
        cout<<"Total Bill: $"<<totalCost<<endl;
    } 
    else 
    {
        cout<<"Product not found in stock."<<endl;
    }
}
void displayCurrentStock() //display current stock
{
    cout<<"Current Stock:"<<endl;
    cout<<"Name\tQuantity\tPrice"<<endl;
    for (const auto& product:productStock) 
    {
        cout<<product.second.name<<"\t"<<product.second.quantity<<"\t\t$"<<product.second.price<<endl;
    }
}
void displayOldStock() //display old stock
{
    cout<<"Old Stock:"<<endl;
    cout<<"Name\tQuantity\tPrice"<<endl;
    // Displaying the product stock at program start (old stock)
    for(const auto&product:productStock) 
    {
        cout<<product.second.name<<"\t"<<product.second.quantity<<"\t\t$"<<product.second.price<<endl;
    }
}
void searchItemInStock() //search for an item in stock 
{
    string productName;
    cout<<"Enter product name: ";
    cin.ignore();
    getline(cin,productName);
    // Check if the product exists in stock
    if(productStock.find(productName)!=productStock.end()) 
    {
        cout<<"Product found in stock."<<endl;
        cout<<"Name\tQuantity\tPrice"<<endl;
        cout<<productStock[productName].name<<"\t"<<productStock[productName].quantity<<"\t\t$"<<productStock[productName].price<<endl;
    } 
    else 
    {
        cout<<"Product not found in stock."<<endl;
    }
}
int main() 
{
    int choice;
    while (true) 
    {
        cout<<"\nProduct Management System"<<endl;
        cout<<"1. Add product to stock"<<endl;
        cout<<"2. Add sales made"<<endl;
        cout<<"3. Generate bill"<<endl;
        cout<<"4. Display current stock"<<endl;
        cout<<"5. Display old stock"<<endl;
        cout<<"6. Search item in stock"<<endl;
        cout<<"7. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch (choice) 
        {
            case 1:
                addProductToStock();
                break;
            case 2:
                addSalesMade();
                break;
            case 3:
                generateBill();
                break;
            case 4:
                displayCurrentStock();
                break;
            case 5:
                displayOldStock();
                break;
            case 6:
                searchItemInStock();
                break;
            case 7:
                cout<<"Exiting program. Goodbye!"<<endl;
                return 0;
            default:
                cout<<"Invalid choice. Please try again."<<endl;
        }
    }
    return 0;
}

