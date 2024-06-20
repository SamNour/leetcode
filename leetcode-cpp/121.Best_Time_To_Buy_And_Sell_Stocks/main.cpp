#include <climits>
#include <vector> 

using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy = INT_MAX;

        for (size_t i = 0; i < prices.size(); i++){
            buy = std::min(buy, prices[i]);
            profit = std::max(profit, prices[i] - buy);
        }
        return profit;
    }
};
