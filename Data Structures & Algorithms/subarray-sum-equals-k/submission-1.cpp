class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //prefix sum
        int ans = 0;
        int curSum = 0;
        std::vector<int> prefix = nums;
        std::unordered_map<int, int> map;
        map[0] = 1;
        for(int num : nums){
            curSum += num;
            int diff = curSum - k;
            ans += map[diff];
            map[curSum] = 1 + map[curSum];

        }

        return ans;
    }
};