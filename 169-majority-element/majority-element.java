import java.util.HashMap;

class Solution {
    public int majorityElement(int[] nums) {
        HashMap <Integer,Integer> map = new HashMap<>();
        int len = nums.length;

        for(int v : nums){
            map.put(v,map.getOrDefault(v,0)+1);
            if (map.get(v) > (len/2)) {
                return v;
            }
        }
       return -1; 
    }
}