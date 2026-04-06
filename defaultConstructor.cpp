// WAP to demonstrate default constructor 

#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    
    Student() {
        roll = 0;
        name = "Not Assigned";
       
    }
    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};
int main() {
    Student s1;   
    s1.display();
    return 0;
}