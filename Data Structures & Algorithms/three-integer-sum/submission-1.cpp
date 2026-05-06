class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        std::sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++)
        {
            int l = i+1;
            int r = nums.size()-1;

            if((i - 1 ) >= 0 && nums[i] == nums[i-1])
                {
                    continue;
                }

            while(l < r)
            {
                if(l != i || r != i)
                {
                    int num = nums[i] + nums[l] + nums[r];
                    if(num > 0){
                        r--;
                    } else if (num < 0)
                    {
                        l++;
                    } else 
                    {
                        ans.push_back({nums[i],nums[l],nums[r]});
                        l++;
                        while(nums[l] == nums[l-1] && l < r){
                            l++;
                        }
                    }
                } else {
                    if(l==i ){
                        l++;
                    } else {
                        r--;
                    }
                }
            }
        }
        return ans;
    }
};