class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        hmp = {}
        for i in range(len(nums)):
            hmp[nums[i]] = hmp.get(nums[i],0)+1
        if hmp and max(hmp.values()) > 1:
            return True
        return False