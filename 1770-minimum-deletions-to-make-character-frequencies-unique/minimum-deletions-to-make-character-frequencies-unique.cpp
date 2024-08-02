class Solution {
public:
    int minDeletions(string s) {
        // Create a hash map to store the frequency of each character in the input string
        unordered_map<char, int> mp;
        int n = s.length(); // Get the length of the input string
        unordered_set<int> st; // Create an unordered set to track encountered frequencies
        
        // Count the frequency of each character in the input string
        for(int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        
        int ans = 0; // Initialize a variable to store the number of deletions
        
        // Iterate through the character frequencies in the map
        for(auto &it : mp) {
            int temp = it.second; // Get the frequency of the current character
            
            // Check if the current frequency is already in the set
            while(temp > 0 and st.find(temp) != st.end()) {
                ans++; // Increment the deletion count
                temp--; // Reduce the frequency
            }
            
            // Insert the updated frequency into the set to mark it as encountered
            st.insert(temp);
        }
        
        return ans; // Return the minimum number of deletions required
    }
};