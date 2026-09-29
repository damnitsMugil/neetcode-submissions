// LeetCode Problem: Running Sum of 1d Array
// Link: https://leetcode.com/problems/running-sum-of-1d-array/
// Difficulty: Easy
// Language: cpp

class Solution {
public:
  vector<int> runningSum(vector<int>& nums) {
    int sum = 0;
    for(int i = 0; i<nums.size(); i++){
      sum += nums[i];
      nums[i] = sum;
    } 
    return nums;
  }
};