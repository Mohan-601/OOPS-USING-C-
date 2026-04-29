// WAP for TimeDurationSystem
#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes;

    void normalize() {
        hours += minutes / 60;
        minutes %= 60;
    }

public:
    Time(int h=0, int m=0) {
        hours = h;
        minutes = m;
        normalize();
    }

    // Add time
    Time operator + (const Time &t) {
        return Time(hours + t.hours, minutes + t.minutes);
    }

    // Subtract time
    Time operator - (const Time &t) {
        int total1 = hours*60 + minutes;
        int total2 = t.hours*60 + t.minutes;
        int diff = total1 - total2;
        return Time(diff/60, diff%60);
    }

    // Compare
    bool operator > (const Time &t) {
        return (hours*60 + minutes) > (t.hours*60 + t.minutes);
    }

    // Increment minute
    Time operator++() {
        minutes++;
        normalize();
        return *this;
    }

    // Output
    friend ostream& operator<<(ostream &out, const Time &t) {
        out << t.hours << "h " << t.minutes << "m";
        return out;
    }
};

int main() {
    Time t1(2, 50), t2(1, 30);

    Time t3 = t1 + t2;
    Time t4 = t1 - t2;

    ++t1;

    if(t1 > t2)
        cout << "t1 is greater\n";

    cout << t3 << endl;
    cout << t4 << endl;

    return 0;
}