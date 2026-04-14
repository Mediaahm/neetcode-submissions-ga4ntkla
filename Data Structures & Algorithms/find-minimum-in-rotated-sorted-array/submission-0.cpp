class Solution {
public:
    int findMin(vector<int> &nums) {
        int left = 0 ;
        int right = nums.size()-1;
        int mid;
        while(left<right){
            mid = ((right - left)/2) +left;

            if(nums[mid] > nums[right]){
                left = mid+1;
            }
            else if(nums[mid] < nums[right]){
                right = mid;
            }
        }

        return nums[left];
    }
};
