#include <string>
#include <iostream>
#include <map>
bool isAnagramHashMap(std::string s, std::string t);
bool isAnagramHashSort(std::string s, std::string t);

int main () {
    std::cout << std::boolalpha;
    bool res = isAnagramHashMap("anagram", "margana");
    std::cout << res << '\n';
}

bool isAnagramSort(std::string s, std::string t) {
    std::sort(s.begin(), s.end());
    std::sort(t.begin(), t.end());

    return s==t;
}

bool isAnagramHashMap(std::string s, std::string t){
    std::map<char, int> count;

    for (auto i : s){
        count[i] ++;
    }
    
    for (auto j : t){
        count[j]--;
    }

    for (auto kv : count){
        if (kv.second != 0)
            return false;
    }
    return true;
}
