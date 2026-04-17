
//  WAP for printing factorial of a number

#include <iostream>
using namespace std;
class Factorial {
public:
    long long calculate(int n) {
        if (n < 0) {
            cout << "Factorial not defined for negative numbers." << endl;
            return -1;
        }

        long long fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }
};

int main() {
    Factorial obj;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial = " << obj.calculate(num);

    return 0;
}

