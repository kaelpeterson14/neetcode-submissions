class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stck; 
        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i] == "+"){
                int x = stck.top();
                stck.pop();
                int y = stck.top();
                stck.pop();
                stck.push(y + x);
            } else if (tokens[i] == "-"){
                int x = stck.top();
                stck.pop();
                int y = stck.top();
                stck.pop();
                stck.push(y - x);
            } else if(tokens[i] == "*"){
                int x = stck.top();
                stck.pop();
                int y = stck.top();
                stck.pop();
                stck.push(y * x);
            } else if(tokens[i] == "/"){
                int x = stck.top();
                stck.pop();
                int y = stck.top();
                stck.pop();
                stck.push(y / x);
                
            } else{
                stck.push(stoi(tokens[i]));
            }
        }

        return(stck.top());
    }
};
