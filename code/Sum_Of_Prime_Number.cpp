// Prime Sum

// Bookmark
// Easy
// 31.9% Success

// 151

// 101
// Asked In:
// Epic Systems
// Problem Description
 
 

// Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to the given number.
// If there is more than one solution possible, return the lexicographically smaller solution i.e.
// If [a, b] is one solution with a <= b,
// and [c,d] is another solution with c <= d, then

// [a, b] < [c, d] 
// If a < c OR ( a == c AND b < d ).
// NOTE: A solution will always exist. read Goldbach's conjecture


// Problem Constraints
// 1 <= A <= 2 * 107


// Input Format
// The first argument is an integer A.


// Output Format
// Return an array of integers.


// Example Input
// 4


// Example Output
// [2, 2]


// Example Explanation
// 2 + 2 equals 4, which is the lexicographically smaller solution

vector<int> Solution::primesum(int A) {
    vector<bool> isPrime(A+1,true);
    vector<int> v1;
    isPrime[0]=false;
    isPrime[1]=false;
    for(int i=2;i<=A;i++)
    {
        if(isPrime[i]==true)
        {
            for(int j = i+i;j<=A;j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
    // for(auto k:isPrime)
    // {
    //     cout<<k<<" ";
    // }
    for(int i=0;i<=A;i++)
    {
        if(isPrime[i]&&isPrime[A-i])
        {
            v1.push_back(i);
            v1.push_back(A-i);
            //because WE NEED oNLY a pAIR
            break;
        }
    }
    return v1;
}