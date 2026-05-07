class Solution {
public:
    void sortColors(vector<int>& nums) {
        int j = 0;
        int k = nums.size()-1;
        int temp;
        for(int i = 0; i < nums.size() && k >= i && j <= i; i++){
            if(nums[i] == 2){
                while(nums[k] == 2 && k > i){
                    k--;
                }
                temp = nums[k];
                nums[k] = nums[i];
                nums[i] = temp;

            } if(nums[i] == 0){
                while(nums[j] == 0 && j < i){
                    j++;
                }
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
                }

            }

    }
};