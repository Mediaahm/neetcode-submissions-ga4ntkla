class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> cars;
        for(int i = 0; i < position.size(); i++){
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.begin(), cars.end());


        double time = 0;
        stack <double> stk;
        for(int i = position.size() - 1; i >= 0 ; i--){
            time = (double)(target - cars[i].first) / (double)(cars[i].second);
            if(stk.empty()){
                stk.push(time);
            }
            else if(time <= stk.top()){
                continue;
            }
            else{
                stk.push(time);
            }
        }
        return stk.size();

    }
};
