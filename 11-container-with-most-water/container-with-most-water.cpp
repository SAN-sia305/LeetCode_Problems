class Solution {
public:
    int maxArea(vector<int>& height) {
        int size = height.size();
        int l = 0, r = size - 1, maxW_area = 0, area = 0;
        while (l < r) {
            area = min(height[l], height[r]) * (r - l);
            maxW_area = max(maxW_area, area);

            if (height[l] < height[r]) {
                l++;
            }
            else {
                r--;
            }
        }
        return maxW_area;
    }
};