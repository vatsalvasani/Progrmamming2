// Square Root of Integer

// Bookmark
// Easy
// 21.4% Success

// 238

// 49
// Asked In:
// Facebook
// Amazon
// Microsoft
// Problem Description
 
 

// Given an integer A.

// Compute and return the square root of A.

// If A is not a perfect square, return floor(sqrt(A)).

// DO NOT USE SQRT FUNCTION FROM STANDARD LIBRARY.

// NOTE: Do not use sort function from standard library. Users are expected to solve this in O(log(A)) time.



// Problem Constraints
// 0 <= A <= INTMAX


// Input Format
// The first and only argument given is the integer A.



// Output Format
// Return floor(sqrt(A))



// Example Input
// Input 1:

//  11
// Input 2:

//  9


// Example Output
// Output 1:

//  3
// Output 2:

//  3


// Example Explanation
// Explanation:

//  When A = 11 , square root of A = 3.316. It is not a perfect square so we return the floor which is 3.
//  When A = 9 which is a perfect square of 3, so we return 3.
 int Solution::sqrt(int A) {
    if(A==0)return 0 ;
    int low=1,high=A,mid;
    while(high>=low)
    {
        mid = high-(high-low)/2;
        if(pow(mid,2)==A)
        {
            return mid;
        }
        //in case of root of 2
        if(pow(mid,2)>A && pow(mid-1,2)<A)
        {
            return mid-1;
        }
        else if(pow(mid,2)<A)
        {
            low=mid;
        }
        else
        {
            high = mid-1;
        }
    }
}
