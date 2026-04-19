// wap to print letters right triangle
#include <iostream>
using namespace std;

class RightTriangle {
public:
    void print(int n) {
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++)
                cout<<char('A'+j);
            cout<<endl;
        }
    }
};

int main(){
    RightTriangle obj;
    obj.print(5);
}