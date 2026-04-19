// wap to print binary triangle
#include <iostream>
using namespace std;

class BinaryTriangle {
public:
    void print(int n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<(i+j)%2;
            }
            cout<<endl;
        }
    }
};

int main(){
    BinaryTriangle obj;
    obj.print(5);
}