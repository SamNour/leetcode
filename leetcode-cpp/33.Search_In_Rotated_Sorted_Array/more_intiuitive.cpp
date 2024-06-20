#include <algorithm>
#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
	int BS(vector<int>& nums, int target){
		int l = 0;
		int r = nums.size();
		while (l < r){
			int mid = (l+r)/2;
			if (nums[mid] == target) return target;
			else if (nums[mid] < target) l = mid + 1;
			else if (nums[mid] > target) r = mid; 
		}
		return -1;
	}
	
    int search(vector<int>& nums, int target) {
        if (nums.size() == 0) return -1;
        if (nums.size() == 1) return nums[0] == target ? 0 : -1;
    	int l = 0;
    	int r = nums.size() - 1;
    	while ( l < r ){
    		if (nums[l] > nums[r]) r--;
            else break;
        } 
    	vector<int> vec_r {};
    	vector<int> vec_l {};
    	for (size_t i = 0; i <= static_cast<size_t>(r); i++) vec_l.push_back(nums[i]);
		for (size_t i = r + 1; i < nums.size(); i++) vec_r.push_back(nums[i]);
        /* debugging */
        for (auto i : vec_l) cout << i << " ";
        cout << endl;
        for (auto i : vec_r) cout << i << " ";
        cout << endl;
        /* debugging */
        int res_l = BS(vec_l, target);
        int res_r = BS(vec_r, target);
        if (res_l != -1) {
            for (int i = 0; i < nums.size(); i++){
                if (nums[i] == res_l) {
                    return i;
                }
            }
        } 
        if (res_r != -1) {
            for (int i = 0; i < nums.size(); i++){
                if (nums[i] == res_r) {
                    return i;
                }
            }
        } 	
        return -1;
	}
};
// int main() {
    // Solution solution;
// 
    // // Test case 1: Target number is in the array
    // vector<int> nums1 = {4,5,6,7,0,1,2};
    // int result1 = solution.search(nums1, 4);
    // cout << "Test case 1 result: " << result1 << endl;  // Expected output: 3
// 
    // // Test case 2: Target number is not in the array
    // vector<int> nums2 = {4,5,6,7,0,1,2};
    // int result2 = solution.search(nums2, 8);
    // cout << "Test case 2 result: " << result2 << endl;  // Expected output: -1
// 
    // // Test case 3: Array is empty
    // vector<int> nums3 = {};
    // int result3 = solution.search(nums3, 7);
    // cout << "Test case 3 result: " << result3 << endl;  // Expected output: -1
// 
    // // Test case 4: Array contains only one element, which is the target number
    // vector<int> nums4 = {7};
    // int result4 = solution.search(nums4, 7);
    // cout << "Test case 4 result: " << result4 << endl;  // Expected output: 0
// 
    // // Test case 5: Array contains only one element, which is not the target number
    // vector<int> nums5 = {4};
    // int result5 = solution.search(nums5, 7);
    // cout << "Test case 5 result: " << result5 << endl;  // Expected output: -1
// 
    // return 0;
// }
