class Solution:
    def firstUniqChar(self, s: str) -> int:
        res = {}
        for i in s:
            res[i] = res.get(i,0) + 1
        
        for key,val in res.items():
            if val == 1:
                return s.find(key) 
        return -1