//  HackerRank — Rangoli Pattern
// Problem Description

// Print alphabet rangoli of size n.

// Example (n = 3):

// ----c----
// --c-b-c--
// c-b-a-b-c
// --c-b-c--
// ----c----

#include <iostream>
using namespace std;
class Rangoli {
public:
      Rangoli(int n) {
        int width = 4*n - 3;

        for(int i = 0; i < n; i++) {
            string s = "";
            for(int j = n-1; j >= n-i; j--) {
                s += char('a' + j);
                s += "-";
            }
            s += char('a' + (n-i-1));
            for(int j = n-i; j < n; j++) {
                s += "-";
                s += char('a' + j);
            }

            int dash = (width - s.size()) / 2;
            cout << string(dash, '-') << s << string(dash, '-') << endl;
        }

        for(int i = n-2; i >= 0; i--) {
            string s = "";
            for(int j = n-1; j >= n-i; j--) {
                s += char('a' + j);
                s += "-";
            }
            s += char('a' + (n-i-1));
            for(int j = n-i; j < n; j++) {
                s += "-";
                s += char('a' + j);
            }

            int dash = (width - s.size()) / 2;
            cout << string(dash, '-') << s << string(dash, '-') << endl;
        }
    }
};

int main() {
    Rangoli r(3);
    return 0;
}

