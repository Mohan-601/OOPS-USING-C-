
// wap to print x star pattern

#include <iostream>
using namespace std;
class XPattern {
public:
    void print(int n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(j==i || j==n-i+1)
                    cout<<"*";
                else
                    cout<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    XPattern obj;
    obj.print(5);
}
