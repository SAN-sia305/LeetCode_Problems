class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k > 0){
            auto min_it = min_element(nums.begin(),nums.end());
            int index = distance(nums.begin(),min_it);
            nums[index] = nums[index]*multiplier;
            k--;  
        }
    return nums;
    }
};