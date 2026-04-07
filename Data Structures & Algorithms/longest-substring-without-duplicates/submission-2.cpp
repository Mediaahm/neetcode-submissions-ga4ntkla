class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        int maxLength = 0;
        int length = 0; 
        unordered_map<char, int> map;
        for(int i = 0 ; i<s.size(); i++){
            if(map.count(s[i]) && map[s[i]] >= start){
                start = map[s[i]] + 1;
            }//If map[s[i]] >= start it means the duplicate is inside your current window, so you need to move start. Otherwise ignore it.
            map[s[i]] = i;
            length = i - start + 1;
            if(length > maxLength){
                maxLength = length; 
            }
        }
        return maxLength;
    }
};
