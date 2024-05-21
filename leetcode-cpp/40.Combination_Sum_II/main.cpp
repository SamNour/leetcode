#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
	int calc_sum(vector<int>& curr){
		int sum {};
		for (auto& i : curr) sum += i;
		return sum;
	}
	void dfs(int index, vector<int>&nums, set<vector<int>>& res, vector<int>& curr, int target){
		if (calc_sum(curr) == target){
            vector<int> temp = curr;
            sort(temp.begin(), temp.end());
			res.insert(temp);
        }
		for(size_t i = index; i < nums.size(); i++){
			curr.push_back(nums[i]);
			dfs(i + 1, nums, res, curr, target);
			curr.pop_back();
		}
	}
	
    vector<vector<int>> subsetsWithDup(vector<int>& nums, int target) {
        vector<int> curr {};
        set<vector<int>> res_set;
        dfs(0, nums, res_set, curr, target);
        vector<vector<int>> res(res_set.begin(), res_set.end());
        return res;
    }
};

int main(){
    Solution s;
    vector<int> nums = {10,1,2,7,6,1,5};
    //sort(nums.begin(), nums.end());
    vector<vector<int>> res = s.subsetsWithDup(nums, 8);
    //print the result
    for(auto v : res){
        for(auto i : v){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
