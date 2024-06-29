#include <unordered_map>
#include <vector>
#include <iostream>

using namespace std;
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int max {};
        unordered_map<int, int> hm {};
        int l = 0, r = 0, res = 0;

        while (r < nums.size() && l <= r){
            if (hm.find(nums[r]) == hm.end()){
                hm[nums[r]] += 1;
            } else { // element found in map
                if (hm[nums[r]] <= k){
                    hm[nums[r]] ++;
                } else {
                    while (hm[nums[r]] > k){
                        hm[nums[l]] --;
                        l++;
                    }
                }
            }
                res = std::max(res, r - l + 1);

            r++;
        }

        return res;
    }
};

int main() {
    // Create vector: 1, 4, 4, 3
    std::vector<int> nums = {1, 4, 4, 3};
    int k = 1; // Assuming k is 2, change it as per your requirement

    // Call maxSubarrayLength
    Solution solution;
    int result = solution.maxSubarrayLength(nums, k);

    // Print the result
    std::cout << "The maximum subarray length is: " << result << std::endl;

    return 0;
}
