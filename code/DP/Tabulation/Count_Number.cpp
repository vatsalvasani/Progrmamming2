// 357. Count Numbers with Unique Digits
// Medium
// 1.2K
// 1.4K
// Companies
// Given an integer n, return the count of all numbers with unique digits, x, where 0 <= x < 10n.

 

// Example 1:

// Input: n = 2
// Output: 91
// Explanation: The answer should be the total numbers in the range of 0 ≤ x < 100, excluding 11,22,33,44,55,66,77,88,99
// Example 2:

// Input: n = 0
// Output: 1
 

// Constraints:

// 0 <= n <= 8
// Accepted
// 115.1K
// Submissions
// 222.5K
// Acceptance Rate
// 51.8%
class Solution 
{
public:
    int countNumbersWithUniqueDigits(int n) 
    {
        if(n==0) return 1;
        vector<int> dp(n+1);
        dp[0]=1;
        dp[1]=10;
        int p=9;
        int i=9;
        for(int x=2; x<=n; x++)
        {
            p*=i;
            dp[x]=dp[x-1]+p;
            i--;
        }
        return dp[n];
    }
};