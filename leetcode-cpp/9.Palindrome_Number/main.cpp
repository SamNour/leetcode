#include <string>
#include <algorithm>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string str{ std::to_string(x)};
        std::string str2 = str;
        reverse(str2.begin(), str2.end());
        return ((str  == str2) ? true : false);	
    }
};
