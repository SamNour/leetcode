#include <iostream>
#include <vector>
#include <unordered_set>
bool containsDuplicate(std::vector<int>& nums);
bool containsDuplicateSort(std::vector<int>& nums);

int main(){
	std::vector<int> nums = {5,4,3,2,1};
	containsDuplicateSort(nums);

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
	int lp{ };
	int rp{ };
	for (int i = 0; i < nums.size(); i++){
		std::cout << nums[i] << '\n';
		if nums[i] == nums[i - 1] {
			return true;
		} 
	}
	return false;
}

