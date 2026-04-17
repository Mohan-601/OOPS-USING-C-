// WAP TO CALCULATE GCD 


#include <iostream>
using namespace std;

class GCD {
public:
    int calculate(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

int main() {
    GCD obj;
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "GCD = " << obj.calculate(num1, num2);
    return 0;
}