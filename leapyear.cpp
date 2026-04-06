// wap to check wheather a given year is leap year or not.

#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;
    if (year % 4 == 0)
        cout << "Leap Year";
    else
        cout << "Not Leap Year";
    return 0;
}