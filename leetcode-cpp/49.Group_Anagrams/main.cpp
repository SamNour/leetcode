#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

class Solution {

public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<std::string, vector<std::string>> hm {};
        for (const auto& str : strs){
			std::string sorted_str = str;
			sort(sorted_str.begin(), sorted_str.end());
            hm[sorted_str].push_back(str);
        }
        for (const auto& pair : hm){
            res.push_back(pair.second);
        }
        return res;
    }
};

int main() {
    Solution solution;
    std::vector<std::string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    std::vector<std::vector<std::string>> result = solution.groupAnagrams(strs);

    // Print the resulting groups
    for (const auto& group : result) {
        for (const std::string& str : group) {
            std::cout << str << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
