class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        #FreqMap of S
        freqMap = {}
        for charS, charT in zip(s,t):
            freqMap[charS] = freqMap.get(charS, 0)+1
            freqMap[charT] = freqMap.get(charT, 0)-1
       
        for c in s:
            if freqMap[c] != 0:
                return False
        return True