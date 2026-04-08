class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0 ; i < s.size(); i++){
            if(s[i]== '{' || s[i]== '[' || s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]== '}'){
                if(st.empty()) return false;
                if(st.top() == '{')
                    st.pop();
                else 
                    return false;
            }
            else if(s[i]== ']'){
                if(st.empty()) return false;
                if(st.top() == '[')
                    st.pop();
                else 
                    return false;

            }
            else if(s[i]== ')'){
                if(st.empty()) return false;
                if(st.top() == '(')
                    st.pop();
                else 
                    return false;
            }       
        }

        if(st.empty())
            return true;
        else
            return false;




        /*stack<char> st;
        unordered_map<char, char> pairs = {
            {'}', '{'},
            {']', '['},
            {')', '('}
        };

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '{' || s[i] == '[' || s[i] == '('){
                st.push(s[i]);
            } else {
                if(st.empty()) return false;
                if(st.top() != pairs[s[i]]) return false;
                st.pop();
            }
        }

        return st.empty();
        */


    }
    
};
