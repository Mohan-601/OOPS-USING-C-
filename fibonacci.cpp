
// .WAP for printing fibonacci sequence
#include <iostream>
using namespace std;
class Fibonacci {
public:
    void generate(int n) {
        if (n <= 0) {
            cout << "Invalid input.";
            return;
        }

        long long a = 0, b = 1, next;

        cout << "Fibonacci Series: ";

        for (int i = 1; i <= n; i++) {
            cout << a << " ";
            next = a + b;
            a = b;
            b = next;
        }
    }
};
int main() {
    Fibonacci obj;
    int terms;

    cout << "Enter number of terms: ";
    cin >> terms;

    obj.generate(terms);

    return 0;
}