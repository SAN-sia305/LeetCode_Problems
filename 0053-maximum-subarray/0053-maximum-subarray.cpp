class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 1){return nums[0]; }
        int currentsum = 0;
        int maxrr = nums[0];
        for(int i : nums){
                currentsum = max(i, currentsum+i);
                maxrr = max(currentsum,maxrr);
            }
        return maxrr;
    }
};