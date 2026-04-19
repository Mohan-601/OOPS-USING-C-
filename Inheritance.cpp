// wap to demonatrate inheritance
#include <iostream>
using namespace std;


class Student {
protected:
    int roll;
    string name;

public:
    void getStudent() {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
    }

    void displayStudent() {
        cout << "\nRoll Number: " << roll;
        cout << "\nName: " << name;
    }
};


class Result : public Student {
private:
    int marks1, marks2, total;

public:
    void getMarks() {
        cout << "Enter Marks for Subject 1: ";
        cin >> marks1;
        cout << "Enter Marks for Subject 2: ";
        cin >> marks2;
    }

    void calculate() {
        total = marks1 + marks2;
    }

    void displayResult() {
        displayStudent();  
        cout << "\nMarks 1: " << marks1;
        cout << "\nMarks 2: " << marks2;
        cout << "\nTotal: " << total << endl;
    }
};


int main() {
    Result r;

    r.getStudent();
    r.getMarks();
    r.calculate();
    r.displayResult();

    return 0;
}