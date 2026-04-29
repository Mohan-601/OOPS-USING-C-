// Wap for student grading system using operator Overloading
#include <iostream>
#include <vector>
using namespace std;

class Student {
private:
    vector<int> marks;

public:
    // Add marks
    Student operator + (int m) {
        Student temp = *this;
        temp.marks.push_back(m);
        return temp;
    }

    // Access marks
    int operator[](int index) {
        return marks[index];
    }

    // Average
    double average() {
        int sum = 0;
        for(int m : marks)
            sum += m;
        return marks.size() ? (double)sum / marks.size() : 0;
    }

    // Compare students
    bool operator > (Student &s) {
        return average() > s.average();
    }

    // Output
    friend ostream& operator<<(ostream &out, Student &s) {
        out << "Average Marks: " << s.average();
        return out;
    }
};

int main() {
    Student s1, s2;

    s1 = s1 + 80;
    s1 = s1 + 90;

    s2 = s2 + 70;
    s2 = s2 + 60;

    if(s1 > s2)
        cout << "s1 is topper\n";

    cout << s1 << endl;
    cout << s2 << endl;

    return 0;
}