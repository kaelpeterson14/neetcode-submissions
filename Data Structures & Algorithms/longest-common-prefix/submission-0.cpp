class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs[0].size();
        int k = 0;
        for(int i = 0; i < strs.size(); i++){
            if(strs[i].length()  < n){
                k = i;
                n = strs[i].length();
            }
        }
        string prefix = "";
        bool finished = false;
        for(int i = 0; i < n; i++){
            char character = strs[k][i];
            for(int j = 0; j < strs.size(); j++){
                if(character == strs[j][i] && j == strs.size()-1){
                    prefix+=character;
                } else if (character != strs[j][i]){
                    finished = true;
                    break;
                }
            }
            if(finished){
                break;
            }
        }
        return prefix;
    }
};