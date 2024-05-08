

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int search(vector<int> &nums, int target);
int main() {

  vector<int> nums{-1, 0, 3, 5, 9, 12};
  int res = search(nums, -1);
  cout << res << '\n';
}

int search(vector<int> &nums, int target) {
  int l = 0;
  int r = nums.size();
  int mid;
  // cout << "HI'\n";
  while (l < r) {
    mid = (l + r) / 2;
    // cout << "mid = " << mid << '\n' ;
    if (nums[mid] == target) {
      cout << "EXIT_SUCCESS" << '\n';
      return nums[mid];
    } else if (nums[mid] < target) {
      l = mid + 1;
    } else if (nums[mid] > target) {
      r = mid;
    }
  }
  return -1;

}

