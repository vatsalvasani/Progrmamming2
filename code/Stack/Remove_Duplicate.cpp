
// 316. Remove Duplicate Letters
// Medium
// 6.5K
// 418
// Companies
// Given a string s, remove duplicate letters so that every letter appears once and only once. You must make sure your result is 
// the smallest in lexicographical order
//  among all possible results.

 

// Example 1:

// Input: s = "bcabc"
// Output: "abc"
// Example 2:

// Input: s = "cbacdcbc"
// Output: "acdb"
 

// Constraints:

// 1 <= s.length <= 104
// s consists of lowercase English letters.
 

// Note: This question is the same as 1081: https://leetcode.com/problems/smallest-subsequence-of-distinct-characters/
class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<char>freq(26,0);
        for(int i=0;i<s.size();i++)freq[s[i]-'a']++;

        stack<char> st;
        vector<bool>seen(26,false);

        for(int i =0;i<s.size();i++){

            if(seen[s[i]-'a']){
                freq[s[i]-'a']--;
            }

        else {

        while(st.size() && st.top()>s[i] && freq[st.top()-'a']>0)
        {
            seen[st.top()-'a']=false;
            st.pop();
        }

        st.push(s[i]);
        freq[s[i]-'a']--;
        seen[s[i]-'a']=true;
        
        }

    }
        string ans ="";

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};