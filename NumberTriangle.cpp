// wap to display a numbers triangle

#include <iostream>
using namespace std;

class Pattern {
public:
    void print(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << j;
            }
            cout << endl;
        }
    }
};

int main() {
    Pattern obj;
    int n;

    cout << "Enter rows: ";
    cin >> n;

    obj.print(n);
    return 0;
}
