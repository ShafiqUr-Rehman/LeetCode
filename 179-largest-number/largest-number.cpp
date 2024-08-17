class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> strNums;
        for (int num : nums) {
            strNums.push_back(to_string(num));
        }
        sort(strNums.begin(), strNums.end(), [](string &a, string &b) {
            return a + b > b + a;
        });

        // If the largest number is "0", return "0"
        if (strNums[0] == "0") return "0";

        // Concatenate all strings to form the largest number
        string result;
        for (string &s : strNums) {
            result += s;
        }
        return result;
    }
};
