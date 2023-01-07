// Given a number A, find all prime numbers up to A (A included).
// Make sure the returned array is sorted.


// Problem Constraints
// 1 <= A <= 106


// Input Format
// The first argument is an integer A.


// Output Format
// Return array of integers.


// Example Input
// A = 7


// Example Output
// [2, 3, 5, 7]


// Example Explanation
// All primes till 7 are, 2, 3, 5 and 7

vector<int> Solution::sieve(int A) {
    vector<int> v1;
    int temp = 0;
    v1.push_back(2);
    for(int j=3;j<=A;j+=2)
    {
        for(int i=2;i<=sqrt(j);i++)
        {
            if(j % i == 0)
            {
                temp = 1;
            }
            
        }
        if(temp!=1)
        {
            v1.push_back(j);
        }
        temp = 0;
        
    }
    return v1;
    
}
