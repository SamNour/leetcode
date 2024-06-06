#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
std::vector<int> dailyTemperatures(std::vector<int> &t) {
		vector<int> res (t.size(),0);
		vector<std::pair<int,int>> stack{};
		for (int i = 0; i < t.size(); i++){
			while (!stack.empty() && t[i] > stack.back().first){
				res[stack.back().second] = i - stack.back().second;
				stack.pop_back();
			} 
			stack.push_back({t[i], i});
		}
		return res;
}
};
//[1,1,4,2,1,1,0,0]

int main() {
    Solution sol;

    std::vector<std::vector<int>> testCases = {
        {73, 74, 75, 71, 69, 72, 76, 73},
        {30, 60, 90},
        {90, 80, 70, 60, 50}
    };

    for (auto& temperatures : testCases) {
        std::vector<int> result = sol.dailyTemperatures(temperatures);

        for(int i : result) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
