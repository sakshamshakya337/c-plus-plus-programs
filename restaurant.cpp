#include <iostream>
using namespace std;

int main() {
    int choice, quantity;
    double price, total_price, gst, sub_total = 0;
    
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Burger - 50" << endl;
        cout << "2. Pizza - 80" << endl;
        cout << "3. Salad - 40" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                price = 50;
                cout << "Enter the quantity: ";
                cin >> quantity;
                sub_total += price * quantity;
                gst=sub_total*0.2+sub_total;
                cout<<"Your Sub total is:"<<sub_total<<endl;
                cout<<"total price:"<<gst;
                break;
            case 2:
                price = 80;
                cout << "Enter the quantity: ";
                cin >> quantity;
                sub_total += price * quantity;
                gst=sub_total*0.2+sub_total;
                cout << "Subtotal: "<<sub_total <<endl;
                cout<<"total price:"<<gst;
                break;
            case 3:
                price = 40;
                cout << "Enter the quantity: ";
                cin >> quantity;
                sub_total += price * quantity;
                gst = sub_total * 0.2 + sub_total;
                cout << "Subtotal: "<<sub_total<<endl;
                cout<<"total price:"<<gst;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }
    return 0;
}
