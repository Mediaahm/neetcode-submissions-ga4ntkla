class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() -1;
        int mid;
        while(left < right){
            mid = ((right -left) /2) + left;

            if(target < nums[mid]){
                //mid = (mid - left + 1) /2 ;
                right = mid;
            }
            else if(target > nums[mid]){
                //mid = (right - left +1) /2;
                left = mid +1;
            }
            else if(target == nums[mid]){
                return mid;
            }
        }
        if(nums[left] == target) 
            return left;
        return -1;
        
    }
};
