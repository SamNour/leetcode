#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>>&, int);
bool search(vector<int>& , int );


int main(){
	vector<vector<int>> matrix {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
	int target = 12;
	bool res = searchMatrix(matrix, target);
	std::cout << boolalpha << res << std::endl;
}

bool searchMatrix(vector<vector<int>>& matrix, int target){

	for (auto &row : matrix){
		if (search(row, target)) return true;
	}
	return false;
}

bool search(vector<int>& arr, int target){
	// implement Binary search
	int l = 0;
	int r = arr.size();
	int mid;

	while (l < r){
		mid = (l+r)/2;
		if (arr[mid] == target) return true;
		else if (arr[mid] > target) r = mid;
		else if (arr[mid] < target) l = mid + 1;
	}
	return false;
}

// 1,3,5,6,7,8,9 t= 7
