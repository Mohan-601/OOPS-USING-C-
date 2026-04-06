
// wap to print check for pallindrome

#include <iostream>
using namespace std;

class Palindrome {
    int num;
public:
    Palindrome(int n) {
        num = n;
    }

    void check() {
        int temp = num, rev = 0, remainder;

        while(temp != 0) {
            remainder = temp % 10;
            rev = rev * 10 + remainder;
            temp /= 10;
        }

        if(rev == num)
            cout << "Palindrome number";
        else
            cout << "Not a palindrome number";
    }
};
