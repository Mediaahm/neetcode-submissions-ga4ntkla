class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        int first;
        int second;
        for(int i = 0 ; i< tokens.size(); i++){
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/"){
                stk.push(stoi(tokens[i]));
            }
            else if(tokens[i] == "+"){
                first = stk.top();
                stk.pop();
                second = stk.top();
                stk.pop();
                stk.push(first+second);
            }
            else if(tokens[i] == "-"){
                first = stk.top();
                stk.pop();
                second = stk.top();
                stk.pop();
                stk.push(second -first);
            }
            else if(tokens[i] == "*"){
                first = stk.top();
                stk.pop();
                second = stk.top();
                stk.pop();
                stk.push(first * second);
            }
            else if(tokens[i] == "/"){
                first = stk.top();
                stk.pop();
                second = stk.top();
                stk.pop();
                stk.push(second / first);
            }
        }
        return stk.top();
    }
};
