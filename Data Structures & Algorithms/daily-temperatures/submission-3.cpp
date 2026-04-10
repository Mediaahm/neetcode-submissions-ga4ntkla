class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result(temperatures.size());
        stack<int> st;
        int distance = 0;
        
        for(int i = 0; i < temperatures.size(); i++){
            if(st.empty()){
                st.push(i);
            }
            else if(temperatures[i] <= temperatures[st.top()]){
                st.push(i);
            }
            else{
                while(!st.empty() && temperatures[i] > temperatures[st.top()]){
                    distance = i - st.top();
                    result[st.top()] = distance;
                    st.pop();
                }
                st.push(i);
            }
        }
        return result;
    }
};
