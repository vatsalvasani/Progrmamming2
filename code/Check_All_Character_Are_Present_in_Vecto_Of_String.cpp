//Given a sentence represented as an array A of strings that contains all lowercase alphabets.
// Chech if it is a pangram or not.
// A pangram is a unique sentence in which every letter of the lowercase alphabet is used at least once.


// Problem Constraints
// 1 <= |A| <= 105
// 1 <= |Ai|<= 5


// Input Format
// Given an array of strings A.


// Output Format
// Return an integer.


// Example Input
// Input 1:
// A = ["the", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"]
// Input 2:

// A = ["bit", "scale"]




// Example Output
// Output 1:
// 1
// Output 2:

// 0


// Example Explanation
// Explanation 1:
// We can check that all english alphabets are present in given sentence.
// Explanation 2:

// Not all english alphabets are present.
#include<bits/stdc++.h>
int Solution::solve(vector<string> &A) {
    vector<int> v1(26,0);
    for(int i=0;i<A.size();i++)
    {
        string str = A[i];
        for(int j=0;j<A[i].size();j++)
        {
            // cout<<str[j];
            v1[str[j]-'a']++;
        }
    }
    for(int i=0;i<v1.size();i++)
    {
        if(v1[i]==0)
        {
            return 0;
        }
    }
    
    return 1;
}
