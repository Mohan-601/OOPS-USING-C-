// Wap for shopping cart system
#include <iostream>
#include <vector>
using namespace std;

class Cart {
private:
    vector<double> prices;

public:
    // Add item
    Cart operator + (double price) {
        Cart temp = *this;
        temp.prices.push_back(price);
        return temp;
    }

    // Remove last item
    Cart operator - (int) {
        Cart temp = *this;
        if(!temp.prices.empty())
            temp.prices.pop_back();
        return temp;
    }

    // Access item
    double operator[](int index) {
        return prices[index];
    }

    // Apply discount
    void operator()(double discount) {
        for(double &p : prices)
            p -= p * discount / 100;
    }

    // Total
    double total() {
        double sum = 0;
        for(double p : prices)
            sum += p;
        return sum;
    }

    // Output
    friend ostream& operator<<(ostream &out, Cart &c) {
        out << "Cart Total: ₹" << c.total();
        return out;
    }
};

int main() {
    Cart c;

    c = c + 1000;
    c = c + 500;
    c = c + 200;

    c(10); // 10% discount

    cout << "Item[1]: " << c[1] << endl;

    cout << c << endl;

    return 0;
}