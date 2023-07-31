// 486. Predict the Winner
// Medium
// 3.7K
// 181
// Companies
// You are given an integer array nums. Two players are playing a game with this array: player 1 and player 2.

// Player 1 and player 2 take turns, with player 1 starting first. Both players start the game with a score of 0. At each turn, the player takes one of the numbers from either end of the array (i.e., nums[0] or nums[nums.length - 1]) which reduces the size of the array by 1. The player adds the chosen number to their score. The game ends when there are no more elements in the array.

// Return true if Player 1 can win the game. If the scores of both players are equal, then player 1 is still the winner, and you should also return true. You may assume that both players are playing optimally.

 

// Example 1:

// Input: nums = [1,5,2]
// Output: false
// Explanation: Initially, player 1 can choose between 1 and 2. 
// If he chooses 2 (or 1), then player 2 can choose from 1 (or 2) and 5. If player 2 chooses 5, then player 1 will be left with 1 (or 2). 
// So, final score of player 1 is 1 + 2 = 3, and player 2 is 5. 
// Hence, player 1 will never be the winner and you need to return false.
// Example 2:

// Input: nums = [1,5,233,7]
// Output: true
// Explanation: Player 1 first chooses 1. Then player 2 has to choose between 5 and 7. No matter which number player 2 choose, player 1 can choose 233.
// Finally, player 1 has more score (234) than player 2 (12), so you need to return True representing player1 can win.
 

// Constraints:

// 1 <= nums.length <= 20
// 0 <= nums[i] <= 107
// Accepted
// 135.4K
// Submissions
// 265.1K
// Acceptance Rate
// 51.1%
// Seen this question in a real interview before?
// 1/4
// Yes
// No
// Discussion (19)
// Similar Questions
// Related Topics
// Copyright ©️ 2023 LeetCode All rights reserved

// C++

// Auto








class Solution {
public:
    int solve(vector<int>&nums,int i, int j){
        if(i>j){
            return 0;
        }
        if(i==j){
            return nums[i];
        }
        //we have two choice here
        //if we choose i then i+1 to j is for b and if he choose i+1 then we have i+2 and j and i+1 j+1
        //same for option 2
        int option1 = nums[i] + min(solve(nums,i+2,j),solve(nums,i+1,j-1));
        int option2 = nums[j] + min(solve(nums,i+1,j-1),solve(nums,i,j-2));
        //return max
        return max(option1 , option2);
    }
    bool PredictTheWinner(vector<int>& nums) {
        int p1Score = solve(nums,0,nums.size()-1);
        int total_Score = 0;
        for(int i=0;i<nums.size();i++){
            total_Score += nums[i];
        }
        int p2Score = total_Score - p1Score;
        if(p1Score>=p2Score){
            return true;
        }
        else{
            return false;
        }
    }
};