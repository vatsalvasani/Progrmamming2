// 198. House Robber
// Medium
// 17K
// 328
// Companies
// You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

// Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

 

// Example 1:

// Input: nums = [1,2,3,1]
// Output: 4
// Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
// Total amount you can rob = 1 + 3 = 4.
// Example 2:

// Input: nums = [2,7,9,3,1]
// Output: 12
// Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
// Total amount you can rob = 2 + 9 + 1 = 12.
 

// Constraints:

// 1 <= nums.length <= 100
// 0 <= nums[i] <= 400
class Solution {
public:
int robbery(vector<int> nums,int j,map<int,int> &mp)
{
    if(j<0)
    {
        return 0;
    }
    int k = robbery(nums,j-2,mp) + nums[j];
    int l = robbery(nums,j-1,mp);
    mp[j] = max(k,l);
    return mp[j];
}
    int rob(vector<int>& nums) {
        map<int,int> mp;
        return robbery(nums,nums.size()-1,mp);
    }
};