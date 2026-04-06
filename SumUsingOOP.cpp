//wap to add two numbers using class

#include <iostream>
using namespace std;
class Add {
public:
    int a, b;

    void sum() {
        cout << a + b;
    }
};
int main() {
    Add obj;

    obj.a = 3;
    obj.b = 4;
    obj.sum();
    return 0;
}