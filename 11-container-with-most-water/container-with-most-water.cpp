class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int maxArea = 0;
        int left = 0;
        int right = height.size() - 1;
        
        while (left < right) {
            int currentArea = (right - left)*min(height[left], height[right]);
            maxArea = max(maxArea, currentArea);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        return maxArea;
    }
};