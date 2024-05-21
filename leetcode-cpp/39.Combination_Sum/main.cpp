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

};

    int main() {
    Solution solution;
    vector<int> candidates = {2,5,2,1,2};
    int target = 5;

    vector<vector<int>> result = solution.combinationSum(candidates, target);

    // Print the result
    for (const auto &combination : result) {
        for (int num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}