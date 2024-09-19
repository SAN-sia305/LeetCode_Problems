class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        /*int temp;
        for(auto j = 0; j < k; j++){
            temp = nums.back();
            for(auto i = nums.size()-1; i > 0  ; i--){
                nums[i]=nums[i-1];
            }
            nums[0]=temp;
        }*/
        int n = nums.size();
        k = k % n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};