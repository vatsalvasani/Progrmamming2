// Approach
// CASE-1 Power is even
// (4)^4 = (4x4)^2
// so number = number x number
// and power becomes power/2

// CASE-2 Power is odd
// (4)^5 = 4 x (4)^4

// when add 4 in the ans
// and n = n-1

// (4)^4 will be solved using above

// when power is Negative it is handled in the code

// pow(x,n)
// Approach
// CASE-1 Power is even
// (4)^4 = (4x4)^2
// so number = number x number
// and power becomes power/2

// CASE-2 Power is odd
// (4)^5 = 4 x (4)^4

// when add 4 in the ans
// and n = n-1

// (4)^4 will be solved using above

// when power is Negative it is handled in the code

// pow(x,n)
class Solution {
public:
    double myPow(double x, long long n) {
        if(n==0){return 1;}
        if(x==0){return 0;}
        if(n<0){return myPow(1/x,abs(n));}
        return (n%2==0 ?  (myPow(x,n/2) * myPow(x,n/2)): (x * myPow(x,n/2) * myPow(x,n/2)));
    }
};