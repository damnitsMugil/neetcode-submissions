class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        hmp = {}
        
        for i in range(len(nums)):
            hmp[nums[i]] = hmp.get(nums[i],0)+1

        return max(hmp,key=hmp.get)