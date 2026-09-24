class Solution:
    def firstUniqChar(self, s: str) -> int:
        
        counter = Counter(s)

        seen = set()

        for k, v in counter.items():
            if v == 1:
                seen.add(k)
        
        for i in range(len(s)):

            if s[i] in seen:
                return i
        return -1