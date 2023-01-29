Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
Example 2:

Input: strs = [""]
Output: [[""]]
Example 3:

Input: strs = ["a"]
Output: [["a"]]
 

Constraints:

1 <= strs.length <= 104
0 <= strs[i].length <= 100
strs[i] consists of lowercase English letters.
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++)
        {
            string str1;
            str1 = strs[i];
            sort(str1.begin(),str1.end());
            mp[str1].push_back(strs[i]);
        }
        auto it = mp.begin();
        while(it!=mp.end())
        {
            ans.push_back(it->second);
            it++;
        }
        return ans;
        
    }
};