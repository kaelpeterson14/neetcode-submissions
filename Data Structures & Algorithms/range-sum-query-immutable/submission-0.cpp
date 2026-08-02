class NumArray {
private:
    std::vector<int> vec;
public:
    NumArray(vector<int>& nums) {
        vec = nums;
        for(int i = 1; i < vec.size(); i++){
            vec[i] += vec[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        if(left > 0){
            return vec[right] - vec[left-1];
        }
        return vec[right];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */