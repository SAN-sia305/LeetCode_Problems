class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int check = 0;
        for(int n : nums){
            check = check^n;
        }
        return check;
    }
};