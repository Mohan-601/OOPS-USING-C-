
// wap to perform dot product on two vectors
#include <iostream>
using namespace std;

class Vector {
private:
    int a[10], b[10];
    int n;

public:
    void input() {
        cout << "Enter size of vectors: ";
        cin >> n;

        cout << "Enter elements of Vector A:\n";
        for(int i=0;i<n;i++)
            cin >> a[i];

        cout << "Enter elements of Vector B:\n";
        for(int i=0;i<n;i++)
            cin >> b[i];
    }

    void dotProduct() {
        int dot = 0;

        for(int i=0;i<n;i++)
            dot += a[i] * b[i];

        cout << "Dot Product = " << dot << endl;
    }

    void display() {
        cout << "Vector A: ";
        for(int i=0;i<n;i++) cout << a[i] << " ";

        cout << "\nVector B: ";
        for(int i=0;i<n;i++) cout << b[i] << " ";

        cout << endl;
    }
};

int main() {
    Vector v;
    int ch;

    do {
        cout << "\n--- VECTOR MENU ---\n";
        cout << "1. Input Vectors\n";
        cout << "2. Display Vectors\n";
        cout << "3. Dot Product\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> ch;

        switch(ch) {
            case 1: v.input(); break;
            case 2: v.display(); break;
            case 3: v.dotProduct(); break;
        }

    } while(ch != 4);

    return 0;
}
