#include<cmath>
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size = nums1.size()+nums2.size();
        for(int i = 0; i < nums2.size(); i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(), nums1.end());
        int s = nums1.size();
        // int x1 = floor(nums1.size()/2);
        // int x2 = ceil(nums1.size()/2);
        // cout << s1 << nums1[x1-1] << nums1[x1];
        if(s % 2 == 0){  
            return (nums1[s/2-1]+nums1[s/2])/2.0; 
        }
        else return nums1[s/2];
        
    }
};