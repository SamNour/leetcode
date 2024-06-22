#include <string>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
		sort(strs.begin(), strs.end());
		std::cout << "Sorted: ";
		for (auto& item : strs){
			std::cout << item << " ";
		}
        string tmp = strs[0];
        vector<string> res {};
        vector<string> split(strs.begin()+1, strs.end());
        for (auto& str : split){
        	string curr ="";
        	for (size_t i =0; i < tmp.size(); i++){
        		if (str[i] == tmp[i]){
        			curr += str[i];
        		} else {
					break;
				}
        	}
        	res.push_back(curr);
        }

		string smallest {tmp};
		for (auto& item : res){
			if (item.size() < smallest.size()){
				smallest = item;
			}
		}
        return smallest;
    }
};
int main() {
	Solution sol;

    std::vector<std::string> strs = {"car", "cir"};
    std::string result = sol.longestCommonPrefix(strs);
    std::cout << "The longest common prefix is: " << result << std::endl;
    return 0;
};
