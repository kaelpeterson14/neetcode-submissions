/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        double low = 1;
        double high = n;
        int mid;
        while(low <= high){
            mid = int(high/2 + low/2);
            int num = guess(mid);
            if(num == 0){
                return mid;
            }else if(num < 0){
                high = mid-1;
            } else{
                low = mid+1;
            }
        }
        return -1;
    }
};