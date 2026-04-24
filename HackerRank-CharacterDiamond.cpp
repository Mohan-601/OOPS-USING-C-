//  HackerRank — Character diamond Pattern
#include <iostream>
using namespace std;

class Chardiamond {
public:
    void print(int n) {
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n-i-1; j++) cout << " ";
            for(int j = 0; j <= i; j++) cout << char('A'+j);
            for(int j = i-1; j >= 0; j--) cout << char('A'+j);
            cout << endl;
        }
        
        for(int i = n-2; i >= 0; i--) {
            for(int j = 0; j < n-i-1; j++) cout << " ";
            for(int j = 0; j <= i; j++) cout << char('A'+j);
            for(int j = i-1; j >= 0; j--) cout << char('A'+j);
            cout << endl;
        }
    }
};

int main() {
    Chardiamond obj;
    obj.print(5);
}