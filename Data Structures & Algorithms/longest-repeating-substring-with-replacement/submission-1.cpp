class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map <char, int> map;
        int left = 0;
        int windowSize = 0;
        int resLength = 0;
        int maxFreq = 0;

        for(int right = 0; right < s.size(); right++){

            map[s[right]]++;
            maxFreq = max(maxFreq, map[s[right]]);

            windowSize = right - left +1;
            if((windowSize - maxFreq)<=k){
                if(right-left+1 > resLength){
                    resLength = right-left+1;
                }
            }
            else{
                map[s[left]]--;
                left++; 
            }
        }
        return resLength;
    }

};
