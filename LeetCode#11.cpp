// LeetCode #11 — Container With Most Water
// Problem:
// Find two lines that together with x-axis form a container holding the most water.


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right=height.size()-1;
        int maxWater = 0;

        while(left < right){
            int h = min(height[left], height[right]);
            maxWater = max(maxWater, h * (right-left));

            if(height[left] < height[right]) left++;
            else right--;
        }
        return maxWater;
    }
};

int main() {
    Solution obj;
    vector<int> h = {1,8,6,2,5,4,8,3,7};
    cout << obj.maxArea(h);
}