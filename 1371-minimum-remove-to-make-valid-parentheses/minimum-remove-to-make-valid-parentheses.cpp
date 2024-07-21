#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        // First pass: Remove unmatched closing parentheses
        int openCount = 0;
        string result;
        for (char c : s) {
            if (c == '(') {
                openCount++;
                result += c;
            } else if (c == ')') {
                if (openCount > 0) {
                    openCount--;
                    result += c;
                }
            } else {
                result += c;
            }
        }

        // Reverse the result string
        reverse(result.begin(), result.end());

        // Second pass: Remove unmatched opening parentheses
        openCount = 0;
        string finalResult;
        for (char c : result) {
            if (c == ')') {
                openCount++;
                finalResult += c;
            } else if (c == '(') {
                if (openCount > 0) {
                    openCount--;
                    finalResult += c;
                }
            } else {
                finalResult += c;
            }
        }

        // Reverse the final result string
        reverse(finalResult.begin(), finalResult.end());

        return finalResult;
    }
};
