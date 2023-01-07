
// Problem Description
 
 

// Given a range [A, B], find sum of integers divisible by 7 in this range.


// Problem Constraints
// 1 <= A <= B <= 109


// Input Format
// First argument is an integer A.
// Second argument is an integer B.


// Output Format
// Return an integer.


// Example Input
// Input 1:
// A = 1
// B = 7
// Input 2:
// A = 99
// B = 115


// Example Output
// Output 1:
// 7
// Output 2:
// 217


// Example Explanation
// Explanation 1:
// Integers divisible by 7 in given range are {7}.
// Explanation 2:
// Integers divisible by 7 in given range are {105, 112}.
long Solution::solve(int A, int B) {
    long sum=0;    
    long start=0;
    for(int i=A;i<=B;i++){
        if(i%7==0){
            start=i;
            break;
        }
    }
    long end=0;
    for(int i=B;i>=A;i--){
        if(i%7==0){
            end=i;
            break;
        }
    }
    //simple shreni in maths
    // sum = n*(a+l)/2
    //7 14 21 28 35 ........ 
    long n = (end-start)/7;
    long m = n+1;
    sum = m*(start+end)/2;
    return sum;
}