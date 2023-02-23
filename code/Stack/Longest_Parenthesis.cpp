// 32. Longest Valid Parentheses
// Hard
// 10.4K
// 329
// Companies
// Given a string containing just the characters '(' and ')', return the length of the longest valid (well-formed) parentheses 
// substring
// .

 

// Example 1:

// Input: s = "(()"
// Output: 2
// Explanation: The longest valid parentheses substring is "()".
// Example 2:

// Input: s = ")()())"
// Output: 4
// Explanation: The longest valid parentheses substring is "()()".
// Example 3:

// Input: s = ""
// Output: 0
 

// Constraints:

// 0 <= s.length <= 3 * 104
// s[i] is '(', or ')'.
class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>s1;
        s1.push(-1);
        int maxi=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                s1.push(i);
            }
            if(s[i]==')'){
                s1.pop();
                if(s1.size()==0){
                    s1.push(i);
                }
                else{
                    int c=i-s1.top();
                    maxi=max(c,maxi);
                }
            }
        }
        return maxi;
    }
};