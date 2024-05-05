#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
	vector<int> nums = {1,2,3,4};	
	int delayed = 1;
	int pd = 1;
	int j = 0;
	vector<int> first;
	vector<int> second;
	vector<int> res;
	for (auto i : nums){
		pd = delayed;
		delayed *= i; 
		first.push_back(pd);
	}
	//reverse(nums.begin(), nums.end());
	delayed = 1;
	pd = 1;
	j = 0;

	for (int i : nums) {
		cout << i << ",";
	}
	cout << "\n";
	for (int i = nums.size() - 1 ; i >= 0 ;--i){
		pd = delayed;
		delayed *= nums[i];
		second.push_back(pd);
		j++;
	}
	// for (auto i : nums){
		// pd = delayed;
		// delayed *= i;
		// second.push_back(pd);
		// j++;
	// }
	for (int i : first) {
		cout << i << ",";
	}
	cout << "\n";
	for (int i : second) {
		cout << i << ",";
	}
	cout << "\n";
	reverse(second.begin(), second.end());
	for (int i = 0; i < nums.size() ; i ++){
		res.push_back(first[i] * second[i]);
	}
	for (int i : res) {
		cout << i << ",";
	}
	cout << "\n";
		
} 		

// 1[1,2,3,4]
//  [1,1,2,6]
// 1[4,3,2,1]
//  [1,4,12,24] -- 

// [1,2,3,4]
// 
