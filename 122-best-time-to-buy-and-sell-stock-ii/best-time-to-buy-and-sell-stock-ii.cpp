class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MaxP = 0,l = 0,r = 0;
        int size = prices.size();
        while(r < size){
            if(prices[r] > prices[l]) {
                MaxP += prices[r++] - prices[l++];
            }
            else{
                l = r;
                ++r;
            }
        }
        return MaxP;
    }
};