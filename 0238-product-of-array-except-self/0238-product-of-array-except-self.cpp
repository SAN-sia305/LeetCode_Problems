class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> answer(size,1);
        int prefix = 1,suffix = 1;
        for(int i = 0;i < size; i++){
            answer[i] = prefix;
            prefix*=nums[i];
        }
        for(int i = size-1;i >= 0; i--){
            answer[i] *= suffix;
            suffix*=nums[i];
        }
    return answer;
    }
};