// Wap for inventory system using operator overloading
#include <iostream>
using namespace std;

class Product {
private:
    string name;
    int quantity;

public:
    Product(string n="", int q=0) {
        name = n;
        quantity = q;
    }

    // Add stock
    Product operator + (int q) {
        return Product(name, quantity + q);
    }

    // Remove stock
    Product operator - (int q) {
        return Product(name, quantity - q);
    }

    // Compare stock
    bool operator > (const Product &p) {
        return quantity > p.quantity;
    }

    // Output
    friend ostream& operator<<(ostream &out, const Product &p) {
        out << p.name << " | Quantity: " << p.quantity;
        return out;
    }
};

int main() {
    Product p1("Laptop", 10);
    Product p2("Phone", 5);

    p1 = p1 + 5;
    p1 = p1 - 3;

    if(p1 > p2)
        cout << "p1 has more stock\n";

    cout << p1 << endl;

    return 0;
}