class Solution {
    public boolean isPalindrome(String s) {
        s = s.toLowerCase();
        s = s.replaceAll("[^a-z0-9]", "");
        int l = 0;
        int r = s.length()-1;
        
        while(l < r){
            
            if(s.charAt(r) != s.charAt(l))
            {
                return false;
            }
            r--;
            l++;
        }
        return true;
    }
}
