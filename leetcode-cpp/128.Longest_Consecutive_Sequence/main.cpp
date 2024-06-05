//add stuff in the hm
// loop over the array and check if i-1 in the hm
// else 
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int max {1};
        // the idea is to find the smallest number in the array
        unordered_set<int> s(nums.begin(), nums.end());
        for(auto& num : nums){
            if (!s.count(num - 1)) {
                int count = 1;
				while (s.find(++num) != s.end()){
					count++;
                    max = std::max(count, max);
				} 
			} 
        }
        return max;
    }
};


int main() {
    Solution solution;
    std::vector<int> nums = {100, 4, 200, 1, 3, 2};
    int result = solution.longestConsecutive(nums);
    std::cout << "The length of the longest consecutive elements sequence is: " << result << std::endl;
    return 0;
}