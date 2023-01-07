// A chips factory is packing chips in packets.
// The packets of chips are represented as an array A.
// Find the packet of chips which are empty (Ai = 0) and move them to the end of the array.
// Return the resultant array.


// Problem Constraints
// 1 <= |A| <= 105
// 0 <= Ai <= 109


// Input Format
// Given an integer array A.


// Output Format
// Return an integer array.


// Example Input
// Input 1:
// A = [0, 1, 2, 3]
// Input 2:

// A = [1, 0, 0, 0]


// Example Output
// Output 1:
// [1, 2, 3, 0]
// Output 2:

// [1, 0, 0, 0]


// Example Explanation
// Explanation 1:
// The only empty packet is at index 1 so we move it last of the array.
// Explanation 2:

// The  packets are already in required arrangement.

vector<int> Solution::solve(vector<int> &A) {
   int n=A.size();
   int i=0,j=0;
   while(j<n){
       //i Hold The Position Of 0.
       if(A[j]!=0){
           swap(A[i++],A[j]);
        }
       j++;
   }
   return A;
}