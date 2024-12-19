#include <queue>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        priority_queue<pair<char, int>> pq;
        for (auto& [chars, nums] : freq) {
            pq.push({chars, nums}); 
        }

        string result;
        while (!pq.empty()) {
            auto [currentChar, count] = pq.top();
            pq.pop();

            int useCount = min(count, repeatLimit);
            result.append(useCount, currentChar);
            count -= useCount;

            if (count > 0) {
                if (pq.empty()) break; 

                auto [nextChar, nextCount] = pq.top();
                pq.pop();

                result.push_back(nextChar);
                if (--nextCount > 0) {
                    pq.push({nextChar, nextCount}); 
                }
                pq.push({currentChar, count});
            }
        }

        return result;
    }
};
