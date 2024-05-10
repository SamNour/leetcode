#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<int> vec {7,5,4,3,2,1,0};

	int hold { vec[0] };
	int profit { 0 };

	for (size_t i = 0; i < vec.size() ; i++){
		profit = max(profit, vec[i] - hold);
		hold = min(hold, vec[i]); 
	}	

	cout << "Profit = " << profit << '\n';
}
