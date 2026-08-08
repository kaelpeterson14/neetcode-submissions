class Solution {
public:
    bool isPalindrome(string s) {
        std::erase_if(s, [](unsigned char c){
            return !std::isalnum(c);
        });
        int i = 0;
        int j = s.size()-1;
        while(i < j) {
            char a = s[i];
            char b = s[j];
            if(b <= 90 && b >= 65){
                b = b + 32;
            }
            if(a <= 90 && a >= 65){
                a = a + 32;
            }
            if(a != b){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
