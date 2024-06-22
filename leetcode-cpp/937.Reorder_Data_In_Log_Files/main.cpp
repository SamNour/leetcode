#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>
#include <vector>
#include "aids.h"
#include <cctype>
#include <sstream>
#include <iostream>
using namespace std;

#ifndef TODO
#define TODO(...) 
#endif

class Solution {
public:
    std::vector<string> reorderLogFiles(std::vector<string>& logs) {
        std::vector<string> dig_logs{};
        std::vector<string> let_logs;
        string id, first_word;
        for (const auto& log : logs){
            std::stringstream ss(log);
            ss >> id;
            ss >> first_word;
            if (isalpha(first_word[0])){
                let_logs.push_back(log);
            } else {
                dig_logs.push_back(log);
            }
        }
        sort(let_logs.begin(), let_logs.end(), [](const auto& a, const auto& b){
            string substr_a = a.substr(a.find_first_of(" ") + 1);
            string substr_b = b.substr(b.find_first_of(" ") + 1);

            if (substr_a != substr_b){
                return substr_a < substr_b;
            } else {
                return a < b;
            }
        });
        std::vector<string> res {};
        for (const auto& log : let_logs){
            res.push_back(log);
        }
        for (const auto& log : dig_logs){
            res.push_back(log);
        }
        TODO("Implement the function");
        return res; 
    }
};

int main() {
    Solution solution;
    std::vector<std::string> logs = {"dig1 8 1 5 1","let1 art can","dig2 3 6","let2 own kit dig","let3 art zero"};
    std::vector<std::string> result = solution.reorderLogFiles(logs);
    for (const auto& log : result) {
        std::cout << log << std::endl;
    }
    return 0;
}
