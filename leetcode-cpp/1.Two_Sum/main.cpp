#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
	std::vector<int> res;
    int target = 9;
    std::vector<int> nums = {2, 7, 11, 15}; // target = 9
    std::unordered_map<int, int> hm;

    for (int i = 0; i < nums.size(); i++) {
        hm[nums[i]] = i;
    }

    for (int i = 0; i < nums.size(); i++) {
        if (hm.find(target - nums[i]) != hm.end()) {
        	res.push_back(nums[i]);
        	res.push_back(target - nums[i]);
        	break;
        }
    }
	for (int i = 0; i < res.size(); i++) {
		std::cout << res[i] << '\n';
    	}
	
    return 0;
}
