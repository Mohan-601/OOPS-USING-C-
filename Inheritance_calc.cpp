
// wap to demonstrate inheritance using class
#include <iostream>
using namespace std;

class Calculator{
public:
    void add(int a,int b){
        cout<<"Sum = "<<a+b<<endl;
    }

    void sub(int a,int b){
        cout<<"Difference = "<<a-b<<endl;
    }

    void mul(int a,int b){
        cout<<"Product = "<<a*b<<endl;
    }

    void div(int a,int b){
        cout<<"Division = "<<a/b<<endl;
    }
};

int main(){
    Calculator c;

    c.add(10,5);
    c.sub(10,5);
    c.mul(10,5);
    c.div(10,5);
return 0;
}