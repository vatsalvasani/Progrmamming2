131. Palindrome Partitioning
Medium
10.3K
325
Companies
Given a string s, partition s such that every 
substring
 of the partition is a 
palindrome
. Return all possible palindrome partitioning of s.

 

Example 1:

Input: s = "aab"
Output: [["a","a","b"],["aa","b"]]
Example 2:

Input: s = "a"
Output: [["a"]]
 

Constraints:

1 <= s.length <= 16
s contains only lowercase English letters.
Accepted
620.4K
Submissions
959.2K
Acceptance Rate
64.7%

class Solution 
{
public:
    vector<vector<string>> res;
    bool ispalindrome(string &s) 
    {
        int l=0, h=s.size()-1;
        while(l<h)
        {
            if(s[l]!=s[h]) return false;
            l++;
            h--;
        }
        return true;
    }

    void find(int i, string &s, string temp, vector<string> valid)
    {
        if(i==s.size())
        {
            if(temp.empty())
                res.push_back(valid);
            return;
        } 

        temp += s[i];
        find(i+1, s, temp, valid);
        if(ispalindrome(temp))
        {
            valid.push_back(temp);
            find(i+1, s, "", valid);
        }
        
    }

    vector<vector<string>> partition(string s) 
    {
        vector<string> valid;
        find(0, s, "", valid);
        return res;   
    }
};