#include <set>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:

	void dfs(int index, vector<int>&nums, set<vector<int>>& res, vector<int> curr){
		res.insert(curr);
		for(int i = index; i < nums.size(); i++){
			curr.push_back(nums[i]);
			dfs(i + 1, nums, res, curr);
			curr.pop_back();
		}
	}
	
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> curr {};
        set<vector<int>> res_set;
        dfs(0, nums, res_set, curr);
        vector<vector<int>> res(res_set.begin(), res_set.end());
        return res;
    }
};

int main(){
    Solution s;
    vector<int> nums = {4,4,4,1,4};
    sort(nums.begin(), nums.end());
    //expected
    //[[],[1],[1,4],[1,4,4],[1,4,4,4],[1,4,4,4,4],[4],[4,4],[4,4,4],[4,4,4,4]]
    vector<vector<int>> res = s.subsetsWithDup(nums);
    //print the result
    for(auto v : res){
        for(auto i : v){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
