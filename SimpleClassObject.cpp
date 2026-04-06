// wap to display simple class and object

#include <iostream>
using namespace std;
class Student {
public:
    int roll;
    int marks;
};
int main() {
    Student s;

    s.roll = 1;
    s.marks = 90;
    cout << s.roll << endl;
    cout << s.marks;
    return 0;
}