// A Pythagorean triplet is a set of three integers a, b and c such that a2 + b2 = c2.
// Find the number of pythagorean triplets such that all the elements of the triplet are less than or equal to A.


// Problem Constraints
// 1 <= A <= 103


// Input Format
// Given an integer A.


// Output Format
// Return an integer.


// Example Input
// Input 1:
// A = 5
// Input 2:

// A = 13


// Example Output
// Output 1:
// 1
// Output 2:

// 3


// Example Explanation
// Explanation 1:
// Then only triplet is {3, 4, 5}
// Explanation 2:

// The triplets are {3, 4, 5}, {6, 8, 10}, {5, 12, 13}.
bool isPerfectSquare(int x)
{
    if (x >= 0) {
        int sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
int Solution::solve(int A) {
    int count=0;
    for(int i=1; i<=A; i++){
        for(int j=1; j*j<i*i; j++){
            int c = i*i-j*j;
            if(isPerfectSquare(c) && j*j+c==i*i && j*j<c){
                count++;
            }
        }
    }
    return count;
}