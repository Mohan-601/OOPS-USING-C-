
// wap to print sum of digits of a number


#include <iostream>
using namespace std;

class SUM {
    int num;
public:
    SUM(int n) {
        num = n;
    }

    void check() {
        int temp = num, sum = 0, remainder;

        while(temp != 0) {
            remainder = temp % 10;
            sum = sum + remainder;
            temp /= 10;
        }}};



int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;

    SUM obj(number);
    obj.check();

    return 0;
}