// LeetCode Problem: Remove Duplicates from Sorted Array
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Difficulty: Easy
// Language: cpp

class Solution {
public:
  int removeDuplicates(vector<int>& nums) {
    int k = 0;
    for(int i = 0; i < nums.size(); i++){
      if(i > 0){
        if(nums[i] != nums[i-1]){
          nums[k] = nums[i];
          k++;
        }
      }
      else{
        nums[k] = nums[i];
        k++;
      }
    }
    return k;
  }
};