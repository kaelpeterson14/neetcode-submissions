class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = nums.size()-1;
        int k = 0;
        for(int i = nums.size()-1; i >= 0; i--){
            if(nums[i] == val){
                nums[i] = nums[j];
                j--;
            } else {
                k++;
            }
        }
        return k;
    }
};