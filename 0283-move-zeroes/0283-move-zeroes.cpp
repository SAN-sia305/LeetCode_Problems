#include <bits/stdc++.h>
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int Nzero = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] != 0){
                nums[Nzero++] = nums[i];
            }
        }
        for(int i = Nzero; i<nums.size(); i++){
            nums[i] = 0;
        }
        
    }
};