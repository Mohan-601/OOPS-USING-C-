//  HackerRank — Plus Minus
// Problem: Ratio of positive, negative, and zero.

#include <iostream>
#include <vector>
using namespace std;

void plusMinus(vector<int> arr) {
    int pos=0, neg=0, zero=0;

    for(int x : arr) {
        if(x > 0) pos++;
        else if(x < 0) neg++;
        else zero++;
    }

    int n = arr.size();

    cout << (float)pos/n << endl;
    cout << (float)neg/n << endl;
    cout << (float)zero/n << endl;
}
