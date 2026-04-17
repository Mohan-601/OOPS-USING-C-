// WAP to check for LCM

#include <iostream>
using namespace std;
class LCM {
public:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    int calculate(int a, int b) {
        return (a * b) / gcd(a, b);
    }
};

int main() {
    LCM obj;
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "LCM = " << obj.calculate(num1, num2);
    return 0;
}