
#include <iostream>
using namespace std;
class Product {
private:
    float price;
    int quantity;
public:
    // Default + Parameterized Constructor
    Product(float p = 0, float q = 0) {
        price = p;
        quantity = q;
    } // Input function
    void input() {
        cout << "Enter length: ";
        cin >> price;

        cout << "Enter width: ";
        cin >> quantity;
    }

    // Display function
    void display() {
        cout << "price: " << price << endl;
        cout << "quantity: " <<quantity << endl;
    }
    //+operator
    Product operator+(Product obj) {
        Product temp;
        temp.price = price + obj.price;
        temp.quantity = quantity + obj.quantity;
        return temp;
    }
};