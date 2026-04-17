//  WAP to check for armstrong number

#include <iostream>
using namespace std;

class Armstrong {
public:
    void check(int n) {
        int original = n;
        int sum = 0;

        while (n != 0) {
            int digit = n % 10;
            sum += digit * digit * digit;
            n /= 10;
        }

        if (sum == original)
            cout << "Armstrong Number";
        else
            cout << "Not Armstrong Number";
    }
};
int main() {
    Armstrong obj;
    int num;

    cout << "Enter number: ";
    cin >> num;

    obj.check(num);
    return 0;
}