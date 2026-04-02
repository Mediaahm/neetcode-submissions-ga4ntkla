class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        /*
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
        */
        /* WON'T WOEK 
        vector<int> result;
        int p =1;
        for(int i = 0 ; i< nums.size(); i++){
            p *= nums[i];
        }

        for(int j = 0; j< nums.size();j++){
            if(nums[j]!= 0)
                result.push_back(p/nums[j]);
        }
        return result;
        */

        vector<int> result;
        int left[nums.size()];
        int right[nums.size()];
        int p =1;
        for (int i = 0 ; i< nums.size(); i++){
            
            left[i] = p;
            p *= nums[i];
        }
        int x = 1;
        for(int j = nums.size()-1 ;  j >= 0 ; j--){
           
            right[j] = x;
            x *= nums[j];
        }
        
        for(int i = 0 ; i < nums.size(); i++){
            result.push_back(left[i]*right[i]);
        }
        return result;
    }
};
