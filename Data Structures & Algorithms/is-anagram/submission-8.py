class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        #FreqMap of S
        freqMap = {}
        for i in range(len(s)):
            freqMap[s[i]] = freqMap.get(s[i], 0)+1
            freqMap[t[i]] = freqMap.get(t[i], 0)-1

        for c in s:
            if freqMap[c] != 0:
                return False
        return True