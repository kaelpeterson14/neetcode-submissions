class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int,int> map;
        for(int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }
        std::vector<std::unordered_set<int>> buckets(nums.size()+1);
        for(int i = 0; i < nums.size(); i++){
            buckets[map[nums[i]]].insert(nums[i]);

            
        }

        std::vector<int> res;
        for(int i = nums.size(); i > 0; i--){
            for(int num : buckets[i]){
                res.push_back(num);
                if(res.size() == k){
                    return res;
                }
            }
        }
        return res;


    }
};