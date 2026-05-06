#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int length = nums.size();
        vector<int> ans;
        for(int i = 0; i < length*2; i++)
        {
            ans.push_back(nums[i%length]);
        }
        return ans;
    }
};