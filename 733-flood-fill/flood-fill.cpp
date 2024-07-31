class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int newColor, int originalColor) {
        if (sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size() || image[sr][sc] != originalColor) {
            return;
        }
        image[sr][sc] = newColor;

        dfs(image, sr + 1, sc, newColor, originalColor);
        dfs(image, sr - 1, sc, newColor, originalColor);
        dfs(image, sr, sc + 1, newColor, originalColor);
        dfs(image, sr, sc - 1, newColor, originalColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int originalColor = image[sr][sc];
        if (originalColor != color) {
            dfs(image, sr, sc, color, originalColor);
        }

        return image;
    }
};
