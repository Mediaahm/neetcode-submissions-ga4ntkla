class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char, int> map;  // WRONG: <int, int>  RIGHT: <char, int>

        for(int i = 0; i < s.length(); i++){
            // WRONG:
            // if(!map.count(s[i])){
            //     map.insert(s[i]);
            //     map[s[i]].value = 1;
            // } else {
            //     map[s[i]]++;
            // }

            map[s[i]]++;  // RIGHT: [] auto creates with 0, just increment
        }

        for(int j = 0; j < t.length(); j++){
            if(!map.count(t[j])){
                return false;
            }
            map[t[j]]--;
        }

        for(char k = 'a'; k <= 'z'; k++){
            if(map[k] != 0){  // WRONG: map[k].value  RIGHT: map[k]
                return false;
            }
        }

        return true;
    }
};