class Solution {
public:
    
    int addz(vector<int> nums, int start, int end){
            int sum = 0;
            for(int i = start; i <= end; i++){ sum+= nums[i];}
            return sum;
    }

    int pivotIndex(vector<int>& nums) {
        int size = nums.size(); 
        if(size < 1){ return -1; }

        int pivot = 0,rt = 0, lf = 0;
        while( pivot < size){
            lf = addz(nums,0,pivot-1);
            rt = addz(nums,pivot+1,size-1);
            
            if(lf == rt){ return pivot; }
            else { pivot++; }
        }
    return -1;
    }
};