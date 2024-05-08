#include <iostream>
#include <vector>
#include <algorithm>

int main(){
	std::vector<char> res;
	std::vector<char> rev_res;
	std::string str {"A man, a plan, a canal: Panama"};
	std::vector<char> data;
	std::copy(str.c_str(), str.c_str()+str.length(), std::back_inserter(data));	

	for (auto i : data) {
		if (isalnum(i)){
			res.push_back(std::tolower(i));
		}
	}
	
	int l = 0;
	int r = res.size() - 1;
	for (int i = 0; i < res.size(); i++){
		std::cout << res[r] << ' ' << res[l] << '\n';
		if (res[l] != res[r]) {
			std::cout << "EXIT_FAIL";
			return EXIT_FAILURE;
		} else {
			l++;
			r--;	
		}
	}
	std::cout << "EXIT_SUCESS";
	
	std::cout << '\n';
}
