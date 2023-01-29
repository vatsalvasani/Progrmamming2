class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //remove all the element with value;
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }
};