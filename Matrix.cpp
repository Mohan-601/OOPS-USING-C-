// wap to input and dislay a matrix
#include <iostream>
using namespace std;

class Matrix {
private:
    int a[10][10];
    int rows, cols;

public:
     Matrix(){
        cout<<"enter the no. of rows and columns";
        cin>>rows>>cols;
        for(int i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
                cin >> a[i][j];
     }



    void display() {
        cout << "\nResult Matrix:\n";
        for(int i=0;i<rows;i++) {
            for(int j=0;j<cols;j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix m;
  m.display();
    return 0;
}