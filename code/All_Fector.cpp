// All Factors

// Bookmark
// Easy
// 23.8% Success

// 83

// 16
// Asked In:
// Cognizant
// Problem Description
 
 

// Given a number A, find all factors of A.


// Problem Constraints
// 1 <= A <= 109


// Input Format
// The first argument is an integer A.


// Output Format
// Return an array of all factors of A.


// Example Input
// A = 6


// Example Output
// [1, 2, 3, 6]


// Example Explanation
// For the given A = 6, its factors are 1, 2, 3, and 6, hence returning an array of them.




vector<int> Solution::allFactors(int A) {
vector<int> res;
vector<int> temp;
//doesn't need for check all th numbers
for(int i=1;i<=sqrt(A);i++){
if(A%i==0){
res.push_back(i);
if(i!=sqrt(A)){
temp.push_back(A/i);
}
}
}
int s=res.size();
int j=temp.size();

while(j>0){
res.push_back(temp[j-1]);
j--;
}
return res;
}