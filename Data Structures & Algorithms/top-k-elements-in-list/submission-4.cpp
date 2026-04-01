class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        /*
        My solution:
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
        */

        /* with heap
        vector<int> result;
        priority_queue <pair<int, int>> pq;
        unordered_map<int, int> map;

        for(int i = 0 ; i < nums.size(); i++){
            map[nums[i]]++;
        }

        for(auto& pair : map){
           pq.push({pair.second, pair.first});
        }

        for(int i = 0; i <k ; i++){
            auto p = pq.top();
            int element = p.second;
            result.push_back(element);
            pq.pop();
        }
        return result;
        */



        vector<int> result;
        unordered_map<int, int> map;
        vector<vector<int>> buckets(nums.size() + 1);

        for (int i = 0; i < nums.size(); i++)
            map[nums[i]]++;

        for (auto& pair : map)
            buckets[pair.second].push_back(pair.first);

        for (int i = buckets.size() - 1; i >= 0; i--)
            for (int j = 0; j < buckets[i].size(); j++) {
                result.push_back(buckets[i][j]);
                if (result.size() == k) return result;
            }

        return result;



        
    }
};
