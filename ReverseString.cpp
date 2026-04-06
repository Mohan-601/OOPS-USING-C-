// wap to print reverse a string

#include <iostream>
#include <string>
using namespace std;

class ReverseString {
    string str;
public:
    ReverseString(string s) {
        str = s;
    }

    void reverse() {
        for(int i = str.length()-1; i >= 0; i--)
            cout << str[i];
    }
};

int main() {
    string input;
    cout << "Enter string: ";
    cin >> input;

    ReverseString obj(input);
    obj.reverse();

    return 0;
}
