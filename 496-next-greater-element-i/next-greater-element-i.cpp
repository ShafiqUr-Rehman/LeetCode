class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        
        // Iterate over each element in nums1
        for (int i = 0; i < nums1.size(); ++i) {
            int nextGreater = -1;
            bool found = false;
            
            // Iterate over nums2 to find the position of nums1[i] and the next greater element
            for (int j = 0; j < nums2.size(); ++j) {
                if (nums2[j] == nums1[i]) {
                    found = true;  // Mark that we found nums1[i] in nums2
                }
                
                if (found && nums2[j] > nums1[i]) {
                    nextGreater = nums2[j];  // Find the next greater element
                    break;
                }
            }
            
            // Add the next greater element (or -1 if there isn't one) to the result vector
            result.push_back(nextGreater);
        }
        
        return result;
    }
};