// HackerRank — Simple Array Sum
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int simpleArraySum(vector<int>& arr) {
        int sum = 0;

        for(int i = 0; i < arr.size(); i++)
            sum += arr[i];

        return sum;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {1,2,3,4};

    cout << obj.simpleArraySum(arr);
    return 0;
}