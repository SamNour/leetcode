

#include <iostream>
#include <vector>
#include <set>
using namespace std;

//get all substrings

void dfs(int index, string& s, set<vector<char>>& res, vector<char>& subset){
    vector<char> temp(s.begin(), s.end());
    if (subset == temp)
        return;
	res.insert(subset);
    for (int i = index; i < s.size(); i++){
	    subset.push_back(s[index]);
        dfs(index + 1, s, res, subset);
	    subset.pop_back();
    }
}

/*
Input: s = "aab"
Output: [["a","a","b"],["aa","b"]]
*/

bool isPalindrome(string s){
    int i = 0;
    int j = s.size() - 1;
    while(i < j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    string s {"aab"};
    set<vector<char>> res;
    vector<char> subset;
    vector<vector<char>> result;
 
    for(int i = 0; i < s.size(); i++) {
        dfs(i, s, res, subset);
    }

	for (vector<char> c : res){
		string tmp(c.begin(), c.end());
		if (isPalindrome(tmp)){
			cout << tmp << "<- is a palindrome" << endl;
		}
	}
    // Print all substrings
    // for(auto& subset : res) {
    //     for(char c : subset) {
    //         cout << c;
    //     }
    //     cout << endl;
    // }

    return 0;
}
