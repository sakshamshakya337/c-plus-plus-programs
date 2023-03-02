//write a C++ program using switch case and use while loop in switch,A small restaurant wants to create a program that calculates the price of a meal based on the customer's order.
//requirements:the program should ask the customer for order,including the item(s) and quantity. the program should then calculate the total price based on the price of each item and quantity according to the user, including gst of 20% tax.
#include <iostream>
using namespace std;

int main() 
{
  int choice, quantity;
  double price, total_price, gst, sub_total = 0.00;
  while (true) {
  cout << "Menu:" << endl;
  cout << "1. Burger - 50" << endl;
  cout << "2. Pizza - 80" << endl;
  cout << "3. Salad - 40" << endl;
  cout << "4. Exit" << endl;
  cout << "Enter your choice: ";
  cin >> choice;
  switch (choice)
 {
            case 1:
                price = 50;
                cout << "Enter the quantity: ";
                cin >> quantity;
                sub_total += price * quantity;
                cout << "Price for " << quantity << " burger(s): ";
                cout<< price * quantity << endl;
                break;
            case 2:
                price = 80;
                cout << "Enter the quantity: ";
                cin >> quantity;
                sub_total += price * quantity;
                cout << "Price for " << quantity << " pizza(s): ";
                cout<< price * quantity << endl;
                break;
            case 3:
                price = 70;
                cout << "Enter the quantity: ";
                cin >> quantity;
                sub_total += price * quantity;
                cout << "Price for " << quantity << " salad(s): ";
                cout<< price * quantity << endl;
                break;
            case 4:
                cout << "Thanks for ordering!" << endl;
                goto end_program;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }
    
    end_program:
    gst = sub_total * 0.2;
    total_price = sub_total + gst;
    cout << "Subtotal: " << sub_total << endl;
    cout << "GST (20%): "<< gst << endl;
    cout << "Total price: "<< total_price << endl;
    return 0;
}
