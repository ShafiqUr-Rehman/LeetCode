class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> countFreq;
        int maxFreq = 0;
        for (int num : nums) {
            countFreq[num]++;
            maxFreq = max(maxFreq, countFreq[num]);
        }
        int totalFreq = 0;
        for (auto& pair : countFreq) {
            if (pair.second == maxFreq) {
                totalFreq += pair.second;
            }
        }
        return totalFreq;
    }
};
