// 343. Integer Break
// Medium
// 3.5K
// 359
// Companies
// Given an integer n, break it into the sum of k positive integers, where k >= 2, and maximize the product of those integers.

// Return the maximum product you can get.

 

// Example 1:

// Input: n = 2
// Output: 1
// Explanation: 2 = 1 + 1, 1 × 1 = 1.
// Example 2:

// Input: n = 10
// Output: 36
// Explanation: 10 = 3 + 3 + 4, 3 × 3 × 4 = 36.
 

// Constraints:

// 2 <= n <= 58
// Accepted
// 224.4K
// Submissions
// 401.6K
// Acceptance Rate
// 55.9%
class Solution {
public:
    int integerBreak(int n) {
        vector<int> v1(n+1,0);
        if(n==2)return 1;
        v1[1] = 1;
        v1[2] = 2;
        for(int i=1;i<=n;i++)
        {
            for(int k=1;k<=n;k++)
            {
                if(i+k<=n)
                {
                    if(i==k)
                    {
                        v1[i+k] = max(v1[i+k],i*k);
                    }
                    else{
                        v1[i+k] = max(v1[i+k],v1[i]*k);
                    }
                    
                }
            }
        }
        for(auto i : v1)
        {
            cout<<i<<" ";
        }
        return v1[n];
    }
};