class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        

        vector<int> result;
        int production =1;
        for(int i = 0; i< nums.size(); i++){
            for(int j = 0 ; j<nums.size(); j++){
                if(i!=j){
                    production *= nums[j];
                }
            }

            result.push_back(production);
            production = 1;
        }
        return result;
    }
};
