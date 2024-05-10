#include <iostream>
#include <vector>
#include <map> 


int main() {
	std::string str= "pwwkew";
	std::vector<char> vec;
	std::copy(str.begin(), str.end(),std::back_inserter(vec)) ;
	std::map<char, int> mp;
	int l = 0;
	int r = 0;
	int count = 0;
	int size = 0;
	while (r < vec.size()){
		if (mp.count(vec[r]) == 0) {
			mp[vec[r]] = 0;
			r++;
			count += 1;
			size = std::max(count, size);
		} else {
			while (mp.count(vec[r]) != 0){
				count -= 1;
				mp.erase(vec[l]);
				l++;
			}
		}
	}
	std::cout << size << '\n';
}

