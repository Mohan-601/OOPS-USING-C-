// wap to add two matrices

#include <iostream>
using namespace std;

class Matrix {
private:
    int a[10][10], b[10][10], result[10][10];
    int rows, cols;

public:
    void input() {
        cout << "Enter rows and columns: ";
        cin >> rows >> cols;

        cout << "Enter Matrix A:\n";
        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
                cin >> a[i][j];

        cout << "Enter Matrix B:\n";
        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
                cin >> b[i][j];
    }

    void add() {
        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
                result[i][j] = a[i][j] + b[i][j];
    }

    void display() {
        cout << "\nResult Matrix:\n";
        for(int i=0;i<rows;i++) {
            for(int j=0;j<cols;j++)
                cout << result[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix m;
    int choice;

    do {
        cout << "\n--- MATRIX MENU ---\n";
        cout << "1. Input Matrices\n";
        cout << "2. Add Matrices\n";
        cout << "3. Display Result\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: m.input(); break;
            case 2: m.add(); break;
            case 3: m.display(); break;
        }

    } while(choice != 4);

    return 0;
}