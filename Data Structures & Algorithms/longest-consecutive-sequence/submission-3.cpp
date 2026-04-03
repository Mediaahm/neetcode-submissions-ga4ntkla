class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen;
        for(int i = 0 ; i < nums.size(); i++){
            seen.insert(nums[i]);
        }
        int maxLength = 0;
        int length = 1;
        for(int i = 0 ; i < nums.size();i++){
            int curr = nums[i];
            if(!seen.count(curr-1)){
                while(seen.count(curr+1)){
                    length++;
                    curr++;
                }
                maxLength = max(maxLength, length);
            }
            length = 1;
        }
        return maxLength;
    }
};
