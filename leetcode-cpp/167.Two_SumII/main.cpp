#include <vector>
#include <iostream>
#include <map>

using namespace std;

int main(){
	vector<int> vec = {-1,0};
	map<int,int> hm;
	int target = -1;
	for (int i; i < vec.size();i++){
		hm[vec[i]] = i;
	}
	vector<int> res;
	for (int i; i < vec.size();i++){
		if (hm.find(target-vec[i]) != hm.end()){
			if (target-vec[i] == vec[i]){
				continue;
			}else {
				res.push_back(i + 1);
				res.push_back(hm[target-vec[i]] + 1);
				hm.erase(target-vec[i]);
				break;	
			}
		}
			
	}
	for (int i : res){
		cout << i << ',' ;
	}
	cout << '\n';
	
}
