#include<climits>
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int min1 = INT_MAX;
        int min2 = INT_MAX;
        for(int i : nums){
            if(i <= min1 ){ min1 = i; }
            else if(i <= min2 ){ min2 = i;}
            else return true; 
        }
        return false;
    }
};