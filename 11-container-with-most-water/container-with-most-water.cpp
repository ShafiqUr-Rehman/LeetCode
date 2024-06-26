#include <vector>
#include <algorithm>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int maxArea = 0;
        int left = 0;
        int right = height.size() - 1;
        
        while (left < right) {
            // Calculate current area
            int currentArea = (right - left) * std::min(height[left], height[right]);
            // Update maxArea if current area is larger
            maxArea = std::max(maxArea, currentArea);
            
            // Move the pointer pointing to the smaller height
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        return maxArea;
    }
};
