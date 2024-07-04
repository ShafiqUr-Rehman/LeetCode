class RecentCounter {
private:
    queue<int> RecentCounterQueue;

public:
    RecentCounter() {
        // No need to initialize the queue here as it's already done at
        // declaration.
    }

    int ping(int t) {
        RecentCounterQueue.push(t); 
        // Remove elements from the queue that are outside the 3000 ms window
        while (RecentCounterQueue.front() < t - 3000) {
            RecentCounterQueue.pop();
        }

        // The size of the queue represents the number of recent requests
        return RecentCounterQueue.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
