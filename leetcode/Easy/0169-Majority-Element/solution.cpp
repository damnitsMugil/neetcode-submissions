// LeetCode Problem: Majority Element
// Link: https://leetcode.com/problems/majority-element/
// Difficulty: Easy
// Language: cpp

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        return nums[nums.size() / 2];
    }
};
