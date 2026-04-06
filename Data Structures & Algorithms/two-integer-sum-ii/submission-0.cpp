class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int p1 = 0;
        int p2 = numbers.size() - 1;
        vector <int> indices;

        for( int i = 0 ; i < numbers.size(); i++){
            if(numbers[p1]+numbers[p2] < target){
                p1++;
            }
            else if(numbers[p1]+numbers[p2] > target){
                p2--;
            }
            else{
                indices.push_back(p1+1);
                indices.push_back(p2+1);
                return indices; 
            }
        }

        
    }
};
