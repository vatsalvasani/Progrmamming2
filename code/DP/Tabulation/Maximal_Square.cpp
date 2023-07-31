// 221. Maximal Square
// Medium
// 8.6K
// 180
// Companies
// Given an m x n binary matrix filled with 0's and 1's, find the largest square containing only 1's and return its area.

 

// Example 1:


// Input: matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
// Output: 4
// Example 2:


// Input: matrix = [["0","1"],["1","0"]]
// Output: 1
// Example 3:

// Input: matrix = [["0"]]
// Output: 0
 

// Constraints:

// m == matrix.length
// n == matrix[i].length
// 1 <= m, n <= 300
// matrix[i][j] is '0' or '1'.
// Accepted
// 567.8K
// Submissions
// 1.3M
// Acceptance Rate
// 44.9%


//APPROACH
//https://leetcode.com/problems/maximal-square/solutions/600149/python-thinking-process-diagrams-dp-approach/


class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int max_area = 0;
        vector<vector<int>> dp;
        for(int i=0;i<matrix.size();i++)
        {
            vector<int> v1;
            for(int j=0;j<matrix[0].size();j++)
            {
                v1.push_back(0);
            }
            dp.push_back(v1);
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if((i==0 || j==0) && matrix[i][j] == '1')
                {
                    dp[i][j] = 1;
                }
                else if(matrix[i][j] == '1' && i-1>=0 && j-1>=0)
                {
                    dp[i][j] = (min(min(dp[i-1][j] ,dp[i][j-1] ),dp[i-1][j-1] ) + 1) ;
                }
                max_area = max(max_area,dp[i][j] );
            }
        }
        return max_area*max_area;
    }
};