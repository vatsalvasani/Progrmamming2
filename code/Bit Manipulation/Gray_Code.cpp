// An n-bit gray code sequence is a sequence of 2n integers where:

// Every integer is in the inclusive range [0, 2n - 1],
// The first integer is 0,
// An integer appears no more than once in the sequence,
// The binary representation of every pair of adjacent integers differs by exactly one bit, and
// The binary representation of the first and last integers differs by exactly one bit.
// Given an integer n, return any valid n-bit gray code sequence.

 

// Example 1:

// Input: n = 2
// Output: [0,1,3,2]
// Explanation:
// The binary representation of [0,1,3,2] is [00,01,11,10].
// - 00 and 01 differ by one bit
// - 01 and 11 differ by one bit
// - 11 and 10 differ by one bit
// - 10 and 00 differ by one bit
// [0,2,3,1] is also a valid gray code sequence, whose binary representation is [00,10,11,01].
// - 00 and 10 differ by one bit
// - 10 and 11 differ by one bit
// - 11 and 01 differ by one bit
// - 01 and 00 differ by one bit
// Example 2:

// Input: n = 1
// Output: [0,1]
 

// Constraints:

// 1 <= n <= 16
// Accepted
// 253.7K
// Submissions
// 446.5K
// Acceptance Rate
// 56.8%
// Seen this question in a real interview before?
// 1/4
// Yes
// No
// Similar Questions
// Related Topics
// Copyright ©️ 2023 LeetCode All rights reserved
class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int>v;
        for(int i=0; i<1<<n; i++) {
            v.push_back(i^i>>1);
        }
        return v;
    }
};