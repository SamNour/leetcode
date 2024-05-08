

#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target);
int binary_search(vector<int>& nums, int target);

int main (){
	vector<int> nums = {4,5,6,7,0,1,2}; 
	int target {1};
	cout << search(nums, target) << endl;
}

int search(vector<int>& nums, int target){
	int l = 0;
	int r = nums.size() - 1;

	// looking for sorted array in the left side first
	while (l < r){ 
		if (nums[l] > nums[r]) r--;
		else break;
	}
	vector<int> vec_l;
	
	copy(nums.begin(), nums.begin() + r, back_inserter(vec_l));
	int res = binary_search(vec_l, target);
	if (res != -1) return res;
 	l = 0;
	r = nums.size() - 1;

	// looking for sorted array in the left side first
	while (l < r){ 
		if (nums[l] > nums[r]) l++;
		else break;
	}
	vector<int> vec_r;
	copy(nums.begin() + l , nums.end(),  back_inserter(vec_r));
	res = binary_search(vec_r, target);
	if (res != -1) return res;

	return -1;
}

int binary_search(vector<int>& nums, int target){
	int l = 0;
	int r = nums.size();
	int mid;

	while (l < r){
		mid = (l + r)/2;
		if (nums[mid] == target) return nums[mid];
		else if  (nums[mid] > target) r = mid;
		else if  (nums[mid] < target) l = mid + 1;
	}
	return -1;
}
