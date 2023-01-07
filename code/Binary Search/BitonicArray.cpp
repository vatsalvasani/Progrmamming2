// Given a bitonic sequence A of N distinct elements, write a program to find a given element B in the bitonic sequence in O(logN) time.

// NOTE:

// A Bitonic Sequence is a sequence of numbers which is first strictly increasing then after a point strictly decreasing.


// Problem Constraints
// 3 <= N <= 105

// 1 <= A[i], B <= 108

// Given array always contain a bitonic point.

// Array A always contain distinct elements.



// Input Format
// First argument is an integer array A denoting the bitonic sequence.

// Second argument is an integer B.



// Output Format
// Return a single integer denoting the position (0 index based) of the element B in the array A if B doesn't exist in A return -1.



// Example Input
// Input 1:

//  A = [3, 9, 10, 20, 17, 5, 1]
//  B = 20
// Input 2:

//  A = [5, 6, 7, 8, 9, 10, 3, 2, 1]
//  B = 30


// Example Output
// Output 1:

//  3
// Output 2:

//  -1


// Example Explanation
// Explanation 1:

//  B = 20 present in A at index 3
// Explanation 2:

//  B = 30 is not present in A
 int Solution::solve(vector<int> &A, int B) {
    int mid,high = A.size()-1,low=0;
    while(low<=high)
    {
        mid = high - (high-low)/2;
        if((mid==low || A[mid-1]<A[mid]) && A[mid+1]<A[mid])
        {
            break;
        }
        else if(A[mid-1]<A[mid] && A[mid+1]>A[mid]){
            high=mid-1;
        }
        else if(A[mid-1]>A[mid] && A[mid+1]<A[mid]){
            low=mid;
        }
    }
    // cout<<A[mid];
    if(A[mid]==B){return mid;}
    int k =mid;
    low=0;
    high=mid-1;
    while(low<=high)
    {
        mid = high - (high-low)/2;
        if(A[mid]==B)
        {
            return mid;
        }
        else if(A[mid]>B){
            high=mid-1;
        }
        else if(A[mid]<B){
            low=mid+1;
        }
    }

    low=k+1;
    high=A.size()-1;
    while(low<=high)
    {
        mid = high - (high-low)/2;
        if(A[mid]==B)
        {
            return mid;
        }
        else if(A[mid]<B){
            high=mid-1;
        }
        else if(A[mid]>B){
            low=mid+1;
        }
    }
    return -1;
    
}
