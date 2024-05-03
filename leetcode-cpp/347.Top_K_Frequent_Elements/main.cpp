#include <vector>
#include <map>
#include <utility> // for std::pair
#include <iostream>
using namespace std;

int main(){
    vector<int> nums = {1,1,1,2,2,3};
    map<int, int> mp;
    for (const auto &i : nums)
    {
        mp[i]++;
    }

    vector<pair<int, int>> vec;

    for (const auto& kv : mp){
        vec.push_back(kv);
    }
    sort(vec.begin(), vec.end(), [](auto a, auto b){
        return a.second < b.second;
    });

    vector<pair<int, int>> split(vec.end() - 2, vec.end());

    for (const auto &p : vec) {
        cout << "(" << p.first << ", " << p.second << ")" << endl;
    }
    
    vector<int> res;
    for (const auto& i : split){
        res.push_back(i.second);
    }
    
}

// vector<int> topKFrequent(vector<int>& nums, int k) {
//     map<int, int> mp;
//     for (const auto &i : nums)
//     {
//         mp[i]++;
//     }

//     vector<pair<int, int>> vec;

//     for (const auto& kv : mp){
//         vec.push_back(kv);
//     }
//     sort(vec.begin(), vec.end(), [](auto a, auto b)){
//         a.second < b.second;
//     }
//       for (const auto &p : vec) {
//         cout << "(" << p.first << ", " << p.second << ")" << endl;
//     }
//     return res;
// }
