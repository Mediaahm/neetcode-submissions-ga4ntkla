class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map <char , int> count1;
        unordered_map <char , int> count2;
        for(int i = 0 ; i <s1.length(); i++){
            count1[s1[i]]++;
        }
        int left = 0;
        int fixedSize = s1.length() ;
        for(int right = 0; right < s2.size(); right++){
            count2[s2[right]]++;
            if((right - left +1) > fixedSize){
                count2[s2[left]]--;
                if(count2[s2[left]]==0){
                    count2.erase(s2[left]);
                }
                left++;
            }

            if(count1 == count2){
                return true;
            }
        }
        return false;
    }
};
