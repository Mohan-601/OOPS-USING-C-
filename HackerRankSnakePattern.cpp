//  HackerRank — Snake Pattern Matrix
#include <iostream>
using namespace std;

class SnakeMatrix {
public:
    void print(int n, int m) {
        int num = 1;
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                for(int j = 0; j < m; j++)
                    cout << num++ << " ";
            } else {
                int temp = num + m - 1;
                for(int j = 0; j < m; j++)
                    cout << temp-- << " ";
                num += m;
            }
            cout << endl;
            

        }
    }
};

int main() {
    SnakeMatrix obj;
    obj.print(4, 5);
}