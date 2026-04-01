class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        
        unordered_map<int, int> map;

        for(int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }

        vector<pair<int, int>> vec(map.begin(), map.end());

            sort(vec.begin(), vec.end(), [](auto& a, auto& b) {
                return a.second > b.second;  // compare by value, greatest first
        });


        for(int i = 0; i < k ; i++){
            result.push_back(vec[i].first);
        }
        return result;
    }
};
