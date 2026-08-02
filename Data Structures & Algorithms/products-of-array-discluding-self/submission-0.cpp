class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pref(n, 1);
        vector<int> suff(n, 1);
        vector<int> res(n, 1);

        int currPref = 1;
        for (int i = 0; i < n; i++) {
            pref[i] = currPref;
            currPref *= nums[i]; 
        }

        // 2. Pass Right-to-Left: Fill suffix array
        // Store running product BEFORE updating it with nums[i]
        int currSuff = 1;
        for (int i = n - 1; i >= 0; i--) {
            suff[i] = currSuff;
            currSuff *= nums[i];
        }

        for(int i = 0; i < n; i++){
            res[i] = pref[i]*suff[i];
        }

        return res;

    }

};
