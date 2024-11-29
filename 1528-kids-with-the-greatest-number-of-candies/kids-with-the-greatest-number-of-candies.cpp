class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies){
        int candySize = candies.size();
        vector<bool> result(candySize);
        for(int i =0; i<candySize;i++){
            if(candies[i]+extraCandies >= *max_element(candies.begin(),candies.end())){
                result[i]=true;
            }       
            else{ result[i] = false; }
       }
     return result;
    }
};