class DetectSquares {
private:
    unordered_map<int, unordered_map<int, int>> point_count;

public:
    DetectSquares() {}

    void add(vector<int> point) {
        int x = point[0];
        int y = point[1];
        point_count[x][y]++;
    }

    int count(vector<int> point) {
        int x = point[0];
        int y = point[1];
        int total_count = 0;
        
        for (const auto& [x1, y_map] : point_count) {
            for (const auto& [y1, count1] : y_map) {
                if (x1 != x && y1 != y) {
                    int side_length = abs(x1 - x);
                    if (abs(y1 - y) == side_length) {
                        total_count += count1 * point_count[x1][y] * point_count[x][y1];
                    }
                }
            }
        }
        
        return total_count;
    }
};
