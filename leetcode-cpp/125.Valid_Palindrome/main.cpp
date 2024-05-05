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

	rev_res = res;
	reverse(rev_res.begin(), rev_res.end());


	
	if(res == rev_res) std::cout << "Ok";
	std::cout << '\n';
}
