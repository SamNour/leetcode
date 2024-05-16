#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v = {0,0,0};
  sort(v.begin(), v.end());
  vector<vector<int>> vv;
  int l{};
  int curr{};
  size_t r{v.size() - 1};
  while (l < r && curr < v.size() - 2) {
    while (l < r) {
      vector<int> tmp;
      int sum = v[curr] + v[l] + v[r];
      if (sum == 0) {
        tmp.push_back(v[curr]);
        tmp.push_back(v[l]);
        tmp.push_back(v[r]);
		if (find(vv.begin(), vv.end(), tmp) == vv.end())
        	vv.push_back(tmp);
        r -= 1;
      } else if (sum > 0) {
        r -= 1;
      } else if (sum < 0) {
        l += 1;
      }
    }
    curr += 1;
    l = curr + 1;
  }
  for (const auto &inner_vector : vv) {
    for (const auto &element : inner_vector) {
      std::cout << element << ' ';
    }
    std::cout << '\n';
  }
}
