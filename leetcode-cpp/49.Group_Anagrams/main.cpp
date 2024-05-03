#include <map>
#include <string>
#include <iostream>
#include <vector>

int main(){
    std::vector<std::string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    std::map<std::string, std::vector<std::string>> gp;
    std::vector<std::vector<std::string>> res;
    for (auto i : strs)
    {
        std::string sorted{i};
        std::sort(sorted.begin(), sorted.end());
        gp[sorted].push_back(i);
    }
    for (auto pair : gp){
        res.push_back(pair.second);
    }
    
}


// std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {

// }
