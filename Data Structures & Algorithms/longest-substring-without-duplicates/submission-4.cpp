class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0){
            return 0;
        }
        std::unordered_set<char> set;
        int max = 1;
        int j = 0;
        for(int i = 0; i < s.size(); i++){
            if(set.insert(s[i]).second){
                max = std::max(max, (i-j)+1);
            } else{
                if(s[i] == s[j] && set.size() > 1){
                    j++;
                } else if(s[i] != s[j]){
                    while(s[j] != s[i]){
                        set.erase(s[j]);
                        j++;
    
                    }
                    i--;
                } else{
                    j++;
                }

                }
            }
            return max;
        }
};