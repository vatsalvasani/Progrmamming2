// Given an integer array A.
// Create an array B such that Bi is the product of all elements of A excluding Ai.
// Since the products can be too large take modulo 109 +7.


// Problem Constraints
// 1 <= |A| <= 105
// 1 <= Ai <= 109


// Input Format
// Given an integer array A.


// Output Format
// Return an integer array.


// Example Input
// Input 1:
// A = [1, 2, 3, 4]
// Input 2:

// A = [9, 9, 9]


// Example Output
// Output 1:
// [24, 12, 8, 6]
// Output 2:

// [81, 81, 81]


// Example Explanation
// Explanation 1:
// [2×3×4, 1×3×4, 1×2×4, 1×2×3]
// Explanation 2:

// [9×9, 9×9, 9×9]
vector<int> Solution::solve(vector<int> &A) {
    long long int mod=1e9+7;

    long long int prod=1;

    vector<long long int> prefix(A.size()),suffix(A.size());

    for(int i=0;i<A.size();i++){

        prod=(prod*A[i])%mod;

        prefix[i]=prod;

    }

    prod=1;

    for(int i=A.size()-1;i>=0;i--){

        prod=(prod*A[i])%mod;

        suffix[i]=prod;

    }


    vector<int> ans(A.size());

    ans[0]=suffix[1];

    ans[A.size()-1]=prefix[A.size()-2];

    for(int i=1;i<A.size()-1;i++){

        long long int x=suffix[i+1],y=prefix[i-1];

        prod=(x*y)%mod;

        ans[i]=prod;

    }

    return ans;
}
