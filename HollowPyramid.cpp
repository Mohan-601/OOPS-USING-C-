// wap to print hollow pyramid
#include <iostream>
using namespace std;

class HollowPyramid {
public:
    void print(int n) {
        for(int i=1;i<=n;i++){
            for(int j=i;j<n;j++)
                cout<<" ";

            for(int j=1;j<=2*i-1;j++){
                if(j==1||j==2*i-1||i==n)
                    cout<<"*";
                else
                    cout<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    HollowPyramid obj;
    obj.print(5);
}