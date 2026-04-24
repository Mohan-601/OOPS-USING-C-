// HackerRank — Triangle Quest
// For n = 5:
// 1
// 22
// 333
// 4444

#include <iostream>
using namespace std;

class TriangleQuest {
public:
    void printPattern(int n) {
        for(int i = 1; i < n; i++) {
            for(int j = 0; j < i; j++)
                cout << i;
            cout << endl;
        }
    }
};

int main() {
    TriangleQuest obj;
    obj.printPattern(6);
}
