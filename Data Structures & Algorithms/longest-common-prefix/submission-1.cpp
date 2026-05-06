class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        bool finished = false;
        for(int i = 0; i < strs[0].length(); i++){
            char character = strs[0][i];
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