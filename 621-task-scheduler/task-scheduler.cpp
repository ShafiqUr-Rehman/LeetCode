class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> taskCount;
        for (char task : tasks) {
            taskCount[task]++;
        }
        // Extract frequencies and sort them in descending order
        vector<int> frequencies;
        for (const auto& entry : taskCount) {
            frequencies.push_back(entry.second);
        }
        sort(frequencies.begin(), frequencies.end(), greater<int>());
        // Get the maximum frequency and count how many tasks have that frequency
        int maxFreq = frequencies[0];
        int maxCount = 0;
        for (int freq : frequencies) {
            if (freq == maxFreq) {
                maxCount++;
            }
        }
        // Calculate the minimum number of intervals
        int partCount = maxFreq - 1;
        int partLength = n - (maxCount - 1);
        int emptySlots = partCount * partLength;
        int availableTasks = tasks.size() - (maxFreq * maxCount);
        int idles = max(0, emptySlots - availableTasks);

        return tasks.size() + idles;
    }
};
