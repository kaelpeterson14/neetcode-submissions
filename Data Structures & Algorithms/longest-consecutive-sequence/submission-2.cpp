class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;
        for(int num : nums){
            set.insert(num);
        }
        int max = 0;
        int currMax = 1;
        for(int num : nums){
            set.erase(num);
            for(int i = num+1; true; i++){
                if(set.contains(i)){
                    currMax++;
                    set.erase(i);
                } else{
                    break;
                }
            }
            for(int i = num-1; true; i--){
                if(set.contains(i)){
                    currMax++;
                    set.erase(i);
                } else{
                    break;
                }
            }
            if(currMax > max){
                max = currMax;
            }
            currMax = 1;
        }
        return max;
        
    }
};
