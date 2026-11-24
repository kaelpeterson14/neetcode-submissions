class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        for(int i = 0; i < s.size(); i++){
            
            char c = s[i];
            if(c == '{' || c == '(' || c == '[')
            {
                stack.push(c);
            } 
            else if(!stack.empty() && (c - 1 == stack.top() || c-2 == stack.top()))
            { 
                stack.pop();
            } else{
                return false;
            }



        }
        return stack.empty();
        
    }
};