

#include <iostream>
#include <vector>

using namespace std;

int findMin(vector<int> &);

int main() {
  vector<int> vec{11, 13, 15, 17};
  // no target :(
  cout << findMin(vec) << endl;
}

int findMin(vector<int> &nums) {
  int l = 0, r = nums.size(), mid;

  if (nums[l] < nums[r - 1])
    return nums[l];

  while (l < r) {
    mid = (l + r) / 2;
    if (nums[l] > nums[r - 1])
      l = mid + 1;
    else if (nums[l] <= nums[r - 1])
      return nums[l];
  }
  return -1;
}
