class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        for(int i = 0; i < operations.size(); i++){
            string str = operations[i];
            if(str == "C"){
                ans.pop_back();
            } else if(str == "D"){
                ans.push_back(ans.back()*2);
            } else if(str == "+") {
                int last = ans[ans.size() - 1];
                int secondLast = ans[ans.size() - 2];
                ans.push_back(last + secondLast);

            } else{
                ans.push_back(std::stoi(str));
            }

            }
            int sum = 0;
            for(int i = 0; i < ans.size(); i++){
                sum = sum + ans[i];
            }
            return sum;

        }
};