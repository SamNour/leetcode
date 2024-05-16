#include <iostream>
#include <numeric>
#include <vector>

int getMax(std::vector<int> &piles) {
  int m{};
  for (int &p : piles)
    m = std::max(m, p);
  return m;
}

int minEatingSpeed(std::vector<int> &piles, int h) {
	int l = 1;
	int r = getMax(piles);
	int res = r;

	while (l < r){
		int mid = (l + r)/2;
		int count = 0;
		for (auto& p : piles){
			count += (p + mid - 1)/ mid;
		}
		if (count > h){
			l = mid + 1;
		} else {
			res = mid;
			r = mid - 1;
		}
	}
return res;
  }
int main() {
  std::vector<int> piles{3, 6, 7, 11};
  int res = minEatingSpeed(piles, 8);
  std::cout << res << '\n';
}
