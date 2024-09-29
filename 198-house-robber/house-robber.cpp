class Solution {
public:
    int rob(vector<int>& nums) {
        int mav = 0 ,prv = 0;
        for(int i = 0; i < nums.size(); i++){
              int temp = max(mav,prv+nums[i]);
              prv = mav;
              mav = temp;
        }
        return mav;
    }
};