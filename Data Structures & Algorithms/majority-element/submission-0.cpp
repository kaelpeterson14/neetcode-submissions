class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int currInt = nums[0];
        int freq = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == currInt){
                freq++;
            } else{
                freq--;
            }
            if(freq == 0){
                currInt = nums[i];
                freq = 1;
            }
        }
        return currInt;
    }
};