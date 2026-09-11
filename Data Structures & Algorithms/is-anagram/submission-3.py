class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        #FreqMap of S
        freqMap = {}
        for c in s:
            freqMap[c] = freqMap.get(c, 0)+1
        for c in t:
            freqMap[c] = freqMap.get(c, 0)-1
        for c in s:
            if freqMap[c] != 0:
                return False
        return True