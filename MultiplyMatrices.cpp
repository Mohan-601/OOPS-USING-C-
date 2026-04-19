
// WAP to multiply two matrices
#include <iostream>
using namespace std;

class Matrix {
private:
    int a[10][10], b[10][10], res[10][10];
    int r1,c1,r2,c2;

public:
    void input() {
        cout<<"Enter rows & cols of A: ";
        cin>>r1>>c1;
        cout<<"Enter Matrix A:\n";
        for(int i=0;i<r1;i++)
            for(int j=0;j<c1;j++)
                cin>>a[i][j];

        cout<<"Enter rows & cols of B: ";
        cin>>r2>>c2;
        cout<<"Enter Matrix B:\n";
        for(int i=0;i<r2;i++)
            for(int j=0;j<c2;j++)
                cin>>b[i][j];
    }

    void multiply() {
        if(c1!=r2) {
            cout<<"Multiplication not possible\n";
            return;
        }

        for(int i=0;i<r1;i++) {
            for(int j=0;j<c2;j++) {
                res[i][j]=0;
                for(int k=0;k<c1;k++)
                    res[i][j]+=a[i][k]*b[k][j];
            }
        }
        cout<<"Multiplication done\n";
    }

    void display() {
        for(int i=0;i<r1;i++) {
            for(int j=0;j<c2;j++)
                cout<<res[i][j]<<" ";
            cout<<endl;
        }
    }
};

int main() {
    Matrix m;
    int ch;
    do {
        cout<<"1.Input 2.Multiply 3.Display 4.Exit\n";
        cin>>ch;
        if(ch==1) m.input();
        else if(ch==2) m.multiply();
        else if(ch==3) m.display();
    } while(ch!=4);
}
