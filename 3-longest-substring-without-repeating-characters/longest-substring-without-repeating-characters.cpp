class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char, int> freq;

        int left = 0;
        int maxLen = 0;

        for(int right = 0; right < s.size(); right++) {

            // add current character
            freq[s[right]]++;

            // shrink window until no duplicate
            while(freq[s[right]] > 1) {

                freq[s[left]]--;

                // optional cleanup
                if(freq[s[left]] == 0) {
                    freq.erase(s[left]);
                }

                left++;
            }

            // valid window length
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};