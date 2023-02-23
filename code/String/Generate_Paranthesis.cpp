// 22. Generate Parentheses
// Medium
// 16.8K
// 662
// Companies
// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

// Example 1:

// Input: n = 3
// Output: ["((()))","(()())","(())()","()(())","()()()"]
// Example 2:

// Input: n = 1
// Output: ["()"]
 

// Constraints:

// 1 <= n <= 8
class Solution {
public:
vector<string>ans;
   void generate (int open,int close ,int n,string s){
       if(s.size()==n*2)ans.push_back(s);
       if(open<n)generate(open+1,close,n,s+"(");
       if(close<open)generate(open,close+1,n,s+")");

   }
    vector<string> generateParenthesis(int n) {
        generate(0,0,n,"");
        return ans;
    }
};