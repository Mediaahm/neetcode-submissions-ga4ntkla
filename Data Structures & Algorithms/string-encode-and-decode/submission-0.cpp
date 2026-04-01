class Solution {
public:

    string encode(vector<string>& strs) {

        string result;

        for(int i = 0 ; i<strs.size(); i++){
            int length = strs[i].length();
            result += to_string(length);
            result += "#";
            result += strs[i];

        }
       return result;
    }

    vector<string> decode(string s) {
        
        vector<string> result;
        int i = 0;
        while (i < s.size()) {
            int j = s.find('#', i);
            int length = stoi(s.substr(i, j - i));
            string word = s.substr(j + 1, length);
            result.push_back(word);
            i = j + 1 + length;
        }
        return result;


    }
};
