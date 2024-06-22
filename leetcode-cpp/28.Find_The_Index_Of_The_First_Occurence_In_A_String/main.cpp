#ifndef TODO
#define TODO(...)
#endif

class Solution {
public:
    int strStr(string haystack, string needle) {
        for (size_t i = 0; i <= haystack.size() - needle.size()){
            if (haystack.substr(i, needle.size()) == needle){
                return i;
            } else {
                return -1;
            }
        }
    }
};


