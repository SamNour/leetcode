//add stuff in the hm
// loop over the array and check if i-1 in the hm
// else 
#include <iostream>
#include <vector>
#include <map>

int main(){
	
	std::map<int, int>hm;
	std::vector<int> vec {100,4,200,1,3,2};
	
	for (auto i : vec){
		hm[i];
	}
	int count = 1;
	int max = 0;
	for (auto i : vec){
		while (hm.find(i - 1) != hm.end()){
			count ++;
			i--;
			max = std::max(max, count);
		} 
		count = 1;
		max = std::max(max, count);
		std::cout << "max :" <<  max << "count : " << count << "\n";
		}
	std::cout << max << "\n";
}
