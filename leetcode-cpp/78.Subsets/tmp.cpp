// #include <iostream>
// #include <vector>

// using namespace std;

// void dfs(vector<int>& nums, int start, vector<int>& subsets, vector<vector<int>>& res){
// 	res.push_back(subsets);
//     for (int i = start; i < nums.size(); i++) {
//        subsets.push_back(nums[i]);
//        dfs(nums, i + 1, subsets, res);
//        subsets.pop_back();
//    }
// }

// vector<vector<int>> subsets(vector<int>& nums){
// 	vector<vector<int>> res {};
// 	vector<int> subsets {};
// 	dfs(nums, 0, subsets, res);
// 	return res;
	
// }

// int main() {
//     vector<int> nums = {1, 2, 3};
//     vector<vector<int>> result = subsets(nums);

//     // Print the subsets
//     for (const auto &subset : result) {
//         cout << "[ ";
//         for (const auto &num : subset) {
//             cout << num << " ";
//         }
//         cout << "]" << endl;
//     }

//     return 0;
// }
