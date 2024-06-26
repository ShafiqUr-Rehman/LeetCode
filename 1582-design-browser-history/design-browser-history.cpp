#include <iostream>
#include <vector>
#include <string>

class BrowserHistory {
private:
    vector<string> history;
    int current;
    int maxSize;

public:
    BrowserHistory(string homepage) {
        history.push_back(homepage);
        current = 0;
        maxSize = 1; // starting with one page
    }
    
    void visit(string url) {
        current++;
        if (current < history.size()) {
            history[current] = url;
        } else {
            history.push_back(url);
        }
        maxSize = current + 1;
        // Clear forward history
        history.resize(maxSize);
    }
    
    string back(int steps) {
        current = max(0, current - steps);
        return history[current];
    }
    
    string forward(int steps) {
        current = min(maxSize - 1, current + steps);
        return history[current];
    }
};
