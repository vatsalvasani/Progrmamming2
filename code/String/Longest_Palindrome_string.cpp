// 5. Longest Palindromic Substring
// Medium
// 23.7K
// 1.4K
// Companies
// Given a string s, return the longest 
// palindromic
 
// substring
//  in s.

 

// Example 1:

// Input: s = "babad"
// Output: "bab"
// Explanation: "aba" is also a valid answer.
// Example 2:

// Input: s = "cbbd"
// Output: "bb"
 

// Constraints:

// 1 <= s.length <= 1000
// s consist of only digits and English letters.
// Accepted
// 2.3M
// Submissions
// 7M
// Acceptance Rate
// 32.4%
// Seen this question in a real interview before?
// 1/4
// Yes
// No
// Similar Questions
// Related Topics
// Copyright ©️ 2023 LeetCode All rights reserved
class Solution { 
public:
    string longestPalindrome(string s) {
         if(s.length()<=1){
        return s;
    }
        int max_length=1;
        int n=s.length();
        int st=0, en=0;
        for(int i=0;i<n-1;i++){
            int l=i ,r=i;
            while(l>=0 && r<n){
                if(s[l]==s[r]){
                    l--;r++;
                }else{break;}
                    
            }
            int len=r-l-1;
            if(len>max_length){
                max_length=len;
                st=l+1;
                en=r-1;   
            }
        }
        for(int i=0;i<n-1;i++){
            int l=i ,r=i+1;
            while(l>=0 && r<n){
                if(s[l]==s[r]){
                    l--;r++;
                }else{break;}
                    
            }
            int len=r-l-1;
            if(len>max_length){
                max_length=len;
                st=l+1;
                en=r-1;            
            }
        }
        cout<<st<<" "<<en<<" "<<max_length;
        return s.substr(st,max_length);
    }
};