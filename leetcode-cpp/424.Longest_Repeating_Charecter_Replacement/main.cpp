#include <iostream>
#include <vector>
#include <map>
using namespace std;
int max_value(map<char,int>&);
int main(){
	string str = "AABABBA";
	vector<char> vec;
	copy(str.begin(), str.end(), back_inserter(vec));
	map<char,int> mp;
	int l = 0;
	int r = 0;
	int res = 0;
	int k = 1;
	while (r < vec.size()){
		mp[vec[r]]++;
		while ((r - l + 1) - max_value(mp) > k) {
			mp[vec[l]]--;
			l++;
		}
		res = max(res, (r - l + 1));
		
		r++;

	}
	cout << res << '\n';
}

int max_value(map<char,int>& mp){
	int max_value = 0;
	for (auto kv : mp){
		max_value = max(max_value, kv.second);
	}	
	return max_value;
}
