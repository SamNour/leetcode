#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>

bool containsDuplicate(std::vector<int>& nums);
bool containsDuplicateSort(std::vector<int>& nums);
bool containsDuplicateHM(std::vector<int>& nums);


int main(){
	std::vector<int> nums = {1,5,4,3,2,1};
	containsDuplicateHM(nums);
	std::cout << (containsDuplicateHM(nums) ? "true" : "false") << '\n';
}

bool containsDuplicate(std::vector<int>& nums) {
	std::unordered_set<int> mySet;
	for (int num : nums ){
		mySet.insert(num);
	}
	if (mySet.size() != nums.size()) {
		return true;
	}
	return false;
}

bool containsDuplicateSort(std::vector<int>& nums) {
	std::sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size(); i++){
		std::cout << nums[i] << '\n';
		if (nums[i] == nums[i - 1]) {
			return true;
		} 
	}
	return false;
}

bool containsDuplicateHM(std::vector<int>& nums) {
	std::unordered_map<int,int> seen;
	
	for (int num : nums ) {
		if (seen[num] >= 1){
			return true; // there are duplicates
		}
		seen[num]++;	
	}
	return false;
}
