227. Basic Calculator II
Medium
5.3K
688
Companies
Given a string s which represents an expression, evaluate this expression and return its value. 

The integer division should truncate toward zero.

You may assume that the given expression is always valid. All intermediate results will be in the range of [-231, 231 - 1].

Note: You are not allowed to use any built-in function which evaluates strings as mathematical expressions, such as eval().

 

Example 1:

Input: s = "3+2*2"
Output: 7
Example 2:

Input: s = " 3/2 "
Output: 1
Example 3:

Input: s = " 3+5 / 2 "
Output: 5
 

Constraints:

1 <= s.length <= 3 * 105
s consists of integers and operators ('+', '-', '*', '/') separated by some number of spaces.
s represents a valid expression.
All the integers in the expression are non-negative integers in the range [0, 231 - 1].
The answer is guaranteed to fit in a 32-bit integer.
Accepted
501.9K
Submissions
1.2M
Acceptance Rate
42.4%
Seen this question in a real interview before?
1/4
Yes
No
Similar Questions
Related Topics
Copyright ©️ 2023 LeetCode All rights reserved
class Solution {
public:
    bool isOperator(char c){
        return c == '+' || c == '-' || c == '*' || c == '/';
    }
        
    int calculate(string s) {
        
        int no = 0 ;
        char ps = '+';
        stack<int> stk ;
        
        for(int i = 0 ; i < s.length() ; i++){
            
            if(isdigit(s[i]))
                no = no*10 + (s[i] - '0');
            
            if(isOperator(s[i]) || i == s.length() -1){
                
                if(ps == '+'){
                    stk.push(no);
                }
                else if(ps == '-')
                    stk.push(-no);
                else if(ps == '*'){
                    int top = stk.top();
                    stk.pop();
                    stk.push(top * no);
                }
                else if(ps == '/'){
                    int top = stk.top();
                    stk.pop();
                    stk.push(top/no);
                }
                no = 0;
            ps = s[i];
            }
            
        }
        int res = 0;
        while(!stk.empty()){
            res += stk.top();
            stk.pop();
        }
        return res ;
    }
};