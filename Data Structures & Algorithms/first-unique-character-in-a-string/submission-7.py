class Solution:
    def firstUniqChar(self, s: str) -> int:
        hashmap = {}

        for i in range(len(s)):
            hashmap[s[i]] = hashmap.get(s[i],0)+1
        
        for j in range(len(s)):
            if hashmap[s[j]] == 1:
                return j
        
        return -1

