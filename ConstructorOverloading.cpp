// WAP to demonstrate constructor overloading 

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    
    Rectangle(int side) {
        length = side;
        breadth = side;
        
    }

    
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
       
    }

    void display() {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << length * breadth << endl;
       
    }
};

int main() {

    Rectangle r1;     
    r1.display();

    Rectangle r2(5);       
    r2.display();

    Rectangle r3(4, 6);   
    r3.display();

    return 0;
}
