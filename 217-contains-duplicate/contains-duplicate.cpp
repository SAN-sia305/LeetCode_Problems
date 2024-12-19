#include<unordered_set>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    //   unordered_set<int> seen;
    //   for(int i : nums){
    //         if(seen.find(i) != seen.end()){
    //             return true;
    //         }
    //         seen.insert(i);
    //       }
    //   return false;
    unordered_map<int,int> checker;
    for(int i : nums){
       checker[i]++;
       if(checker[i] >=2 ){return true; }
    }
    return false;
    }
    
};