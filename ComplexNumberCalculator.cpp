// Wap For Complex Number Calculator
#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;

public:
    Complex(double r=0, double i=0) {
        real = r;
        imag = i;
    }

    // Addition
    Complex operator + (const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }

    // Subtraction
    Complex operator - (const Complex &c) {
        return Complex(real - c.real, imag - c.imag);
    }

    // Multiplication
    Complex operator * (const Complex &c) {
        return Complex(real*c.real - imag*c.imag,
                       real*c.imag + imag*c.real);
    }

    // Equality
    bool operator == (const Complex &c) {
        return real == c.real && imag == c.imag;
    }

    // Output
    friend ostream& operator<<(ostream &out, const Complex &c) {
        out << c.real << " + " << c.imag << "i";
        return out;
    }
};

int main() {
    Complex c1(2,3), c2(1,4);

    Complex c3 = c1 + c2;
    Complex c4 = c1 * c2;

    cout << c3 << endl;
    cout << c4 << endl;

    return 0;
}