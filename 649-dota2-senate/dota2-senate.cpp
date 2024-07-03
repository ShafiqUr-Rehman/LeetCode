#include <string>
#include <queue>

class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> R;
        queue<int> D;
        int n = senate.size();

        // Step 1: Initialize queues based on senate composition
        for (int i = 0; i < n; ++i) {
            if (senate[i] == 'R')
                R.push(i);
            else if (senate[i] == 'D')
                D.push(i);
        }
        
        while (!D.empty() && !R.empty()) {
            int dTurn = D.front();
            D.pop();
            int rTurn = R.front();
            R.pop();

            if (rTurn < dTurn) {
                R.push(rTurn + n);
            } else if (dTurn < rTurn) {
                D.push(dTurn + n);
            }
        }
        
        return R.empty() ? "Dire" : "Radiant";
    }
};
