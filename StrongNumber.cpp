
// WAP to check for strong number

#include <iostream>
using namespace std;

class StrongNumber {
public:
    int factorial(int n) {
        int fact = 1;
        for (int i = 1; i <= n; i++)
            fact *= i;
        return fact;
    }

    void check(int n) {
        int original = n;
        int sum = 0;

        while (n != 0) {
            int digit = n % 10;
            sum += factorial(digit);
            n /= 10;
        }

        if (sum == original)
            cout << "Strong Number";
        else
            cout << "Not Strong Number";
    }
};

int main() {
    StrongNumber obj;
    int num;
    cout << "Enter number: ";
    cin >> num;
    obj.check(num);
    return 0;
}
