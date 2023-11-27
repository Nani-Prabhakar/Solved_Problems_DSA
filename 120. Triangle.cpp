//120. Triangle
class Solution {
    int rec(int n, int i, int j, vector<vector<int>>& grid, vector<vector<int>>& dp) {
        if (dp[i][j] != -1) return dp[i][j];
        if (i == n - 1) return grid[i][j];
        
        int down = grid[i][j] + rec(n, i + 1, j, grid, dp);
        int dg = grid[i][j] + rec(n, i + 1, j + 1, grid, dp);
        
        return dp[i][j] = min(down, dg);
    }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        //int m = triangle[n - 1].size(); // Use the size of the last row since it can be different
          vector<vector<int> > dp(n, vector<int>(n, 0));

    // Initialize the bottom row of dp with the values from the triangle
    for (int j = 0; j < n; j++) {
        dp[n - 1][j] = triangle[n - 1][j];
    }

    // Iterate through the triangle rows in reverse order
    for (int i = n - 2; i >= 0; i--) {
        for (int j = i; j >= 0; j--) {
            // Calculate the minimum path sum for the current cell
            int down = triangle[i][j] + dp[i + 1][j];
            int diagonal = triangle[i][j] + dp[i + 1][j + 1];

            // Store the minimum of the two possible paths in dp
            dp[i][j] = min(down, diagonal);
        }
    }

    // The top-left cell of dp now contains the minimum path sum
    return dp[0][0];
    }
};
