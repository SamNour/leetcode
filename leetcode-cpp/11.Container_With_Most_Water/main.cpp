#include <vector>
#include <iostream>
#include <algorithm>

int maxArea(std::vector<int> & height);

int main(){
    std::vector<int> vec1 {1,8,6,2,5,4,8,3,7};
    int max_area = maxArea(vec1);
    std::cout << "Max area: " << max_area << std::endl;
}


int maxArea(std::vector<int>& vec){
	int area{};
	int h 	{};
	int l 	{0};
	int r 	{static_cast<int>(vec.size()) - 1};
	int w   {};
	while (l < r){
		if (vec[l] < vec[r]){
			w = (r - l);
			h = vec[l];
			l++;
		} else {
			w = (r - l);
			h = vec[r];
			r--;
		}
		area = std::max(area, h * w);
	}
	return area;
	
}
