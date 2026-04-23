// hacker rank -- MINI-MAX SUM
// Find min sum of 4 elements and max sum of 4 elements.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void miniMaxSum(vector<int>& arr) {
        long total = 0;

        for(int i = 0; i < arr.size(); i++)
            total += arr[i];

        long minSum = total - arr[0];
        long maxSum = total - arr[0];

        for(int i = 0; i < arr.size(); i++) {
            long sum = total - arr[i];

            if(sum < minSum) minSum = sum;
            if(sum > maxSum) maxSum = sum;
        }

        cout << minSum << " " << maxSum;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {1,2,3,4,5};
    obj.miniMaxSum(arr);
return 0;
}