//Given an integer array A of length N. Where Ai is the cost of stepping on the ith stair.
// From ith stair, you can go to i+1th or i+2th numbered stair.
// Initially, you are at 1st stair find the minimum cost to reach Nth stair.


// Problem Constraints
// 2 <= N <= 105
// 1 <= Ai <= 104


// Input Format
// The first and only argument is an integer array A.


// Output Format
// Return an integer.


// Example Input
// Input 1:
// A = [1, 2, 1, 3]
// Input 2:

// A = [1, 2, 3, 4]


// Example Output
// Output 1:
// 5
// Output 2:

// 7


// Example Explanation
// Explanation 1:
// 1 -> 3 -> 4
// Explanation 2:

// 1 -> 2 -> 4

int Solution::solve(vector<int> &A) {
 int n = A.size();
    int dp[n];
    dp[0] = A[0];
    dp[1] = A[0] + A[1];
    for(int i = 2 ; i < n; i++){
        dp[i] = min(A[i] + dp[i-1], A[i] + dp[i-2]);
    }
    return dp[n-1];
}
