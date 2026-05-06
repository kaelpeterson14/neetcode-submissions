class Solution {
public:
    int mySqrt(int x) {
        int low = 0;
        int high = x;
        int ans;

if(x == 0){
    return 0;
}
        while (low <= high){
            ans = (high + low) /2;
            if(ans == 0){
                return 1;
            }
            if(x/ans == ans){
                return ans;
            } if(x/ans > ans){
                low = ans + 1;
                if((x/(ans+1)) < ans+1){
                    return ans;
                }
            } if (x/ans < ans){

                high = ans - 1;
            }
        }
        return -1;
    }
};