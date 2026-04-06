// WAP to demonstrate move constructor 

#include <iostream>
using namespace std;
class Number {
private:
    int *data;

public:
    
    Number(int value) {
        data = new int(value);
        
    }

    
    Number(Number &&obj) {
        data = obj.data;      
        obj.data = nullptr;   
        
    }

    void display() {
        if (data != nullptr)
            cout << "Value: " << *data << endl;
    }

};

int main() {
    Number n1(50);
    Number n2 = move(n1);  

    n2.display();
    return 0;
}
