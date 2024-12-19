class Solution {
public:
    int majorityElement(vector<int>& nums) {
    //     int n = nums.size();
    //     int element = 0;
    //     int count = 0;
    //     for(int i = 0; i < n; i++){
    //         if(count == 0){
    //             count = 1;
    //             element = nums[i];
    //         }
    //         else if(nums[i] == element){
    //             count++;
    //         }
    //         else {
    //             count--;
    //         }
    //     }
    //     int check = 0;
    //     for(int i = 0;i < n; i++){
    //         if(nums[i] == element) check++;
    //     }
    //     if(check > n/2){
    //         return element;
    //         }
    //     return -1;
    // }

    unordered_map<int,int> freq;
    for(int i : nums){
        freq[i]++;
    }

    for(auto& [fst,scd] : freq){
        if(scd > nums.size()/2){ return fst; }
    }
    return 0;
    }
};