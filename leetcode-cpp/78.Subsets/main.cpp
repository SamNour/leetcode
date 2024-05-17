#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    inline void dfs(int index, vector<int>& nums, vector<vector<int>>& res, vector<int>& curr, int target){

        if (index == nums.size() || target < 0){
            return;
        }

        if (target == 0){
            res.push_back(curr);
            return;
        }


        curr.push_back(nums[index]);
        dfs(index, nums, res, curr, target - nums[index]);
        curr.pop_back();
        dfs(index + 1, nums, res, curr, target);
        return;
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        dfs(0, candidates, res, curr, target);
        return res;
    }
    int main() {
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;

    // Assuming the combinationSum function is a member of a class named Solution
    Solution solution;
    vector<vector<int>> result = solution.combinationSum(candidates, target);

    // Print the combinations
    for (const auto &combination : result) {
        for (const auto &num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
};