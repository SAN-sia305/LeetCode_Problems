class Solution {
public:
      int pivotIndex(vector<int>& nums) {
        int size = nums.size(); 
        if(size < 1){ return -1; }

        int pivot = 0,rt = 0, lf = 0;
        while(pivot < size){

            for(int i = 0; i <= pivot-1; i++){ lf+= nums[i];}
            for(int i = pivot+1 ; i <= size-1; i++){ rt+= nums[i];}
        
            if(lf == rt){ return pivot; }
            else {
               lf = 0;
               rt = 0; 
               pivot++; 
            }
        }
    return -1;
    }
};