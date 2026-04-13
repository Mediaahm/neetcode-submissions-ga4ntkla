class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int left = 0;
        int cols = matrix[0].size();
        int rows = matrix.size();
        int right = (rows * cols) -1 ; 
        int mid ;
        
        while(left < right){
            mid = (right - left)/2 + left;


            if(target < matrix[mid/cols][mid%cols]){
                right = mid;
            }
            else if(target > matrix[mid/cols][mid%cols]){
                left = mid + 1;
            }
            else{
                return true;
            }
        }

        if(matrix[left/cols][left%cols]== target){
            return true;
        }
        return false;
    }
};
