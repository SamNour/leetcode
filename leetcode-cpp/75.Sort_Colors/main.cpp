class Solution {
public:
    void sortColors(vector<int>& nums) {
        // hm is used to count the colors 
        std::unordered_map<int, int> hm {};
        for (const auto& color : nums){
            if (color == 0) hm[0]++;
            else if (color == 1) hm[1]++;
            else if (color == 2) hm[2]++;
            
        }
        nums.clear();
        std::cout << hm[0] << "\n";
        if (hm[0] >= 1){
            for (size_t i = 0; i < hm[0]; i++)
                nums.push_back(0);
        }
        
        if (hm[1] >= 1){
            for (size_t i = 0; i < hm[1]; i++){
                nums.push_back(1);
            }   
        }

        if (hm[2] >= 1){
            for (size_t i = 0; i < hm[2]; i++){
                nums.push_back(2);
            }   
        }
    }
};
