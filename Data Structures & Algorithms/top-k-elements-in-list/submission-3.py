class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = Counter(nums)
        buckets = [[] for _ in range(len(nums)+1)] 
        print(freq[7])


        #creating the bucket sort, make a 2d array of size 10,000
        for key in freq.keys():
            buckets[freq[key]].append(key)

        res = []
        for bucket in reversed(buckets):
            for n in bucket:
                res.append(n)
                if len(res) == k:
                    return res
            
        return res
        