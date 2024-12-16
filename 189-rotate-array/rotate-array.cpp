class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int size = nums.size();
       if (size <= 1 || k == 0) return;
       vector<int> swaped(size);
       int idx = 0;
       k = k % size;
       for(int i = size-k; i < size; i++){
          swaped[idx++] = nums[i];
          cout<<nums[i]<<endl;
       }
       for(int i = 0; i < size-k; i++){
          swaped[idx++] = nums[i];
          cout<<nums[i]<<endl;
        }
    nums = swaped;
    }
};