#include <iostream>
#include <vector>

using namespace std;


void f( vector<int> &nums, vector<vector<int>> &res, vector<int> &permutations, vector<bool> &used){
    if (permutations.size() == nums.size()){
		res.push_back(permutations);
		return;
	}
    for (int i = 0; i < nums.size(); i++){
		if (used[i] == false){
			used[i] = true;
       		permutations.push_back(nums[i]);
			f(nums, res, permutations, used);
			used[i] = false;
        	permutations.pop_back();
		}
        
    }
}

int main(){
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> res;
    vector<int> curr;
	vector<bool> used (nums.size(), false);
	f(nums, res, curr, used);

	// Print the subsets
    for (const auto &subset : res) {
        for (const auto &num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
