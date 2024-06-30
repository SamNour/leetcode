class Solution {
public:
    int get_sum_vals(unordered_map<int, int>& hm){
        int max {};
        for (const auto& pair : hm) {
            max += pair.second;
        }
        return max;
    }
    int totalFruit(vector<int>& fruits) {
        int l = 0, r = 0, total = 0;
        unordered_map<int, int> hm {};
        while ( r < fruits.size() ){
            hm[fruits[r]]++;
            if(hm.size() > 2){
                hm[fruits[l]]--;
                if (hm[fruits[l]] == 0){
                    hm.erase(fruits[l]);
                }
                l++;
            } else 
            if (hm.size() <= 2){
                total = std::max(total, get_sum_vals(hm));

            }
            r++;
        }
        return total;
    }
};
