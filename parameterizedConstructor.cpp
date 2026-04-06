
// WAP to demonstrate parameterized constructor 

#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
   
    Student(int r, string n) {
        roll = r;
        name = n;
       
    }
    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};
int main() {
    Student s1(101, "Rizul");  
    s1.display();
    return 0;
}