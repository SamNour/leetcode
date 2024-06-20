
#include <algorithm>
#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;


        while (l <= r){
            if (l == r){
                return nums[l];
            }
            if (nums[l] > nums[r]){
                l++;
            } else 
            if (nums[l] < nums[r]){
                return nums[l];
            }
        }
        return -1;
    }
};
// int main() {
    // Solution solution;
    // vector<int> nums = {3,2,1};
    // int result = solution.findMin(nums);
    // cout << "Minimum: " << result << endl;
    // return 0;
// }
