class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        myMap = {}
        for i in range(len(nums)):
            newTarget = target - nums[i]
            if newTarget in myMap:
                if(myMap[newTarget] != i):
                    return [min(i, myMap[newTarget]), max(i,myMap[newTarget])]
            myMap[nums[i]] = i

        return [0]

        