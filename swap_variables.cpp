// wap for swapping values of  two numbers using third one

#include <iostream>
using namespace std;
int main() {
    int x, y, temp;

    cin >> x;
    cin >> y;
    temp = x;
    x = y;
    y = temp;
    cout << x << " " << y;
    return 0;
}