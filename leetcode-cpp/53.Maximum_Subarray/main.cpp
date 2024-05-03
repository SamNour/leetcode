#include <iostream>
#include <vector>
#include <map>
#include "main.h"



int main(){
    std::vector<int> nums = {5,4,-1,7,8,-23};
    std::vector<int> res = maximumSubarray(nums);
    std::cout << "[";
    for (auto i : res)
    {
        std::cout << i << ",";
    }
    std::cout << "]\n";
}

std::vector<int> maximumSubarray(std::vector<int> nums){
    if (nums.size() == 1){
        return nums;
    }
    int lp = 0;
    int rp = nums.size() - 1;
    std::map<std::vector<int>, int> sum_map;
    for(auto i: nums){
        while (lp < rp){
            std::vector<int> nums_slice(nums.begin() + lp, nums.begin() + rp);
            sum_map[nums_slice] = sum(nums_slice);
            rp--;
        }
        // std::cout << "lp: " << lp << " rp: " << rp << std::endl;
        lp++;
        rp = nums.size() - 1;
    }
    std::vector<int> res = {};
    int max_sum = 0;
    for (const auto& pair : sum_map){
        const auto key_vector = pair.first;
        const auto value = pair.second;
        if (value > max_sum){
            max_sum = value;
            res = key_vector;
        }
    }
    return res;
}

int sum(std::vector<int> nums){
    int sum = 0;
    for(auto i: nums){
        sum += i;
    }
    return sum;
}
