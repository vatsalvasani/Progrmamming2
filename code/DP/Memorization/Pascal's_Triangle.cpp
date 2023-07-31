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
vector<vector<int>> gen(int num,map<int,vector<vector<int>>> &mp)
{
    if(mp.find(num) != mp.end())
    {
        return mp[num];
    }
    if(num == 1)return {{1}};
    vector<vector<int>> temp = gen(num-1,mp);
    vector<int> temp1;
    temp1.push_back(1);
    for(int i=0;i<temp[num-2].size();i++)
    {
        if(i+1<temp[num-2].size())
        {
            temp1.push_back(temp[num-2][i]+temp[num-2][i+1]);
        }
    }
    temp1.push_back(1);
    temp.push_back(temp1);
    mp[num] = temp;
    return mp[num];
}
    vector<vector<int>> generate(int numRows) {
        map<int,vector<vector<int>>> mp;
        return gen(numRows,mp);
    }
};