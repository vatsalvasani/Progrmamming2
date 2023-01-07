// 14. Longest Common Prefix
// Easy
// 11.8K
// 3.6K
// Companies
// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

 

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
 

// Constraints:

// 1 <= strs.length <= 200
// 0 <= strs[i].length <= 200
// strs[i] consists of only lowercase English letters.
string longestCommonPrefix(vector<string>& strs) {
    if(strs.size()==0)
        return string();
    if(strs.size()==1)
        return strs[0];
    int k = strs[0].size();
    int j = 0;
    int flag = 0;
    while(j<k){
        for(int i=1;i<strs.size();i++){
            if(strs[i].size()<j+1||strs[i][j]!=strs[i-1][j]){
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            break;
        j++;
    }
    return strs[0].substr(0,j);
}