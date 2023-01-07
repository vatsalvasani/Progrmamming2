// //Given a string A, consisting of comma-separated positive integers.
// Extract the given integers from the string and return an integer array consisting of the integers present in the string.

// Note: All given integers will fit in a 32-bit signed integer.


// Problem Constraints
// 1 <= |A| <= 105


// Input Format
// The first and only argument is a string A.


// Output Format
// Return an integer array.
// The array should contain all the integers in the same order as they appear in the string.


// Example Input
// Input 1:
// A = "1,2,3"
// Input 2:

// A = "1,99,3"


// Example Output
// Output 1:
// [1, 2, 3]
// Output 2:

// [1, 99, 3]


// Example Explanation
// Explanation 1:
// The array is given in Example output.
// Explanation 2:

// The array is given in Example output.

vector<int> Solution::solve(string A) {
    vector<int> v1;
    for(int i=0;i<A.size();i++)
    {
        if(isdigit(A[i]))
        {
            int l = A[i]-'0';
            int k;
            for(k=i+1;isdigit(A[k]);k++)
            {
                l=(l)*10+(A[k]-'0');
            }
            i=k-1;
            v1.push_back(l);  
        }
        
    }
    return v1;
}
