class Solution {
public:
    bool isValid(string s) {
        if(s.size() == 0){
            return true;
        }
        stack<char> stack;
        for(int i = 0; i < s.size(); i++){
            char str = s[i];
            if(str == '}' &&  stack.size() > 0 && stack.top() == '{'){
                stack.pop();
            } else if(str == ')' && stack.size() > 0 && stack.top() == '('){
                stack.pop();
            } else if(str == ']' && stack.size() > 0 && stack.top() == '['){
                stack.pop();
            } else if(str == '(' || str == '{' || str == '['){
                stack.push(str);
            } else{
                return false;
            }

        }
        if(stack.size() == 0){
            return true;
        } else {
            return false;
        }
    }
};
