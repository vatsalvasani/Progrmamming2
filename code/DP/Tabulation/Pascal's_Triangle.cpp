// 118. Pascal's Triangle
// Easy
// 9.3K
// 304
// Companies
// Given an integer numRows, return the first numRows of Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:


 

// Example 1:

// Input: numRows = 5
// Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
// Example 2:

// Input: numRows = 1
// Output: [[1]]
 

// Constraints:

// 1 <= numRows <= 30
class Solution {
public:

    vector<vector<int>> generate(int numRows) {
        vector<vector<vector<int>>> v1;
        v1.push_back({{{1}}});
        for(int i=0;i<numRows-1;i++)
        {
            vector<vector<int>> temp = v1[i];
            vector<int> v2;
            v2.push_back(1);
            for(int j = 0; j<temp[i].size();j++)
            {
                if(j+1<temp[i].size())
                {
                    v2.push_back(temp[i][j] + temp[i][j+1]);
                }
                
            }
            v2.push_back(1);
            temp.push_back(v2);
            v1.push_back(temp);

        }
        return v1[numRows-1];
    }
};