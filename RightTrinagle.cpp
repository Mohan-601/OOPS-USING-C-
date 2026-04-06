
// wap to print star right angled trinagle

 #include <iostream>
using namespace std;

class RightTriangle {
    int n;
public:
    RightTriangle(int rows) {
        n = rows;
    }

    void display() {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    RightTriangle obj(rows);
    obj.display();

    return 0;
}