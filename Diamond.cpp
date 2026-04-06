// wap to print star diamond

#include <iostream>
using namespace std;

class Diamond {
    int n;
public:
    Diamond(int rows) {
        n = rows;
    }

    void display() {
      
        for(int i = 1; i <= n; i++) {
            for(int space = 1; space <= n-i; space++)
                cout << " ";

            for(int star = 1; star <= (2*i-1); star++)
                cout << "*";

            cout << endl;
        }

       
        for(int i = n-1; i >= 1; i--) {
            for(int space = 1; space <= n-i; space++)
                cout << " ";

            for(int star = 1; star <= (2*i-1); star++)
                cout << "*";

            cout << endl;
        }
    }
};

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    Diamond obj(rows);
    obj.display();

    return 0;
}