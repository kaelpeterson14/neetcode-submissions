class Solution {
    public int search(int[] nums, int target) {
    
        return binarySearch(nums, target, 0, nums.length);
    }

    public int binarySearch(int[] nums, int target, int left, int right){
        int index = (left+right)/2;
        if(left  == right && nums[index] != target){
            return -1;
        }
        if(nums[index] == target){
            return index;
        } 
        if(right - left == 1){
            return -1;
        }
        if(target > nums[index]){
            return binarySearch(nums, target, index, right);
        } else{
            return binarySearch(nums, target, left, index);
        }


    }


}
