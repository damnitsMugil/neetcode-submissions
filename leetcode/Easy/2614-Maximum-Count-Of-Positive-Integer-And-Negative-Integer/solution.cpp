// LeetCode Problem: Maximum Count of Positive Integer and Negative Integer
// Link: https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/
// Difficulty: Easy
// Language: cpp

class Solution {
public:
  int maximumCount(vector<int>& nums) {
    int pos, neg;
    pos = neg = 0;
    for(int i = 0; i < nums.size(); i++){
      if(nums[i] > 0) pos++;
      if(nums[i] < 0) neg++;
    }
    int count = pos >= neg ? pos : neg;
    return count;
  }
};