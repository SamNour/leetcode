class Solution {
public:
    int maxArea(vector<int>& height) {
        int w = 0;
        int area = 0;
        for (size_t i = 0; i < height.size(); i++ ){
            w = 0;
            for (size_t j = (i+1); j < height.size(); j++){
                w += 1;
                if (height[i] < height[j]){
                    area = max(area, (height[i] * w));
                } else {
                    area = max(area, (height[j] * w));
                }
            }
        }
        return area;
    }
};
