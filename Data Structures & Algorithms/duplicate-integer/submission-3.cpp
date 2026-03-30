class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set <int> finding;
       

        for( int i = 0; i <nums.size(); i++){
            if(finding.count(nums[i])){
                return true;
            }
            finding.insert(nums[i]);
        }
        return false;
    }
};