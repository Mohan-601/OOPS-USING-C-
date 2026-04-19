
// wap to print star butterfly
#include <iostream>
using namespace std;

class Butterfly {
public:
    void print(int n){

        for(int i=1;i<=n;i++){

            for(int j=1;j<=i;j++)
                cout<<"*";

            for(int j=1;j<=2*(n-i);j++)
                cout<<" ";

            for(int j=1;j<=i;j++)
                cout<<"*";

            cout<<endl;
        }

        for(int i=n;i>=1;i--){

            for(int j=1;j<=i;j++)
                cout<<"*";

            for(int j=1;j<=2*(n-i);j++)
                cout<<" ";

            for(int j=1;j<=i;j++)
                cout<<"*";

            cout<<endl;
        }
    }
};

int main(){
    Butterfly obj;
    obj.print(5);
}