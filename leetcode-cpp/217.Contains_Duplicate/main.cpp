#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <algorithm> // for std::sort

bool containsDuplicate(std::vector<int>& nums);
bool containsDuplicateSort(std::vector<int>& nums);
bool containsDuplicateHM(std::vector<int>& nums);

int main() {
    std::vector<int> nums = {1, 5, 4, 3, 2, 1};
    std::cout << (containsDuplicateHM(nums) ? "true" : "false") << '\n';
}

/*
 * Method: containsDuplicate
 * This method uses an unordered_set to track the unique elements.
 * If the size of the set is not equal to the size of the input vector,
 * it means there are duplicates.
 */
bool containsDuplicate(std::vector<int>& nums) {
    std::unordered_set<int> mySet;
    for (int num : nums) {
        mySet.insert(num);
    }
    if (mySet.size() != nums.size()) {
        return true;
    }
    return false;
}

/*
 * Method: containsDuplicateSort
 * This method sorts the vector first and then checks if any two adjacent
 * elements are equal. If they are, it means there are duplicates.
 */
bool containsDuplicateSort(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    for (size_t i = 1; i < nums.size(); i++) { // start from 1 to avoid out-of-bounds access
        std::cout << nums[i] << '\n';
        if (nums[i] == nums[i - 1]) {
            return true;
        }
    }
    return false;
}

/*
 * Method: containsDuplicateHM
 * This method uses an unordered_map to count the occurrences of each element.
 * If any element is found more than once, it means there are duplicates.
 */
bool containsDuplicateHM(std::vector<int>& nums) {
    std::unordered_map<int, int> seen;
    for (int num : nums) {
        if (seen[num] >= 1) {
            return true; // there are duplicates
        }
        seen[num]++;
    }
    return false;
}

/***********************************************/
/* Method: containsDuplicate (adjacent_find)   */
/* This method sorts the vector first and then */
/* uses std::adjacent_find to check if there   */
/* are any adjacent elements that are equal.   */
/* If such elements are found, it means there  */
/* are duplicates.                             */
/***********************************************/
class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        auto res = std::adjacent_find(nums.begin(), nums.end());
        return (res == nums.end()) ? false : true;
    }
};
