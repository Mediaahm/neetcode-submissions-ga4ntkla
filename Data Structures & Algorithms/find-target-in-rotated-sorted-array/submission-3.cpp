class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0; 
        int right = nums.size() - 1;
        int mid;
        while (left < right) {
            mid = ((right - left) / 2) + left;
            if (nums[mid] == target) {
                return mid;
            }
            // left half is sorted
            if (nums[left] <= nums[mid]) {
                if (nums[left] <= target && target < nums[mid]) {
                    right = mid;
                } else {
                    left = mid + 1;
                }
            }
            // right half is sorted
            else {
                if (nums[mid] < target && target <= nums[right]) {
                    left = mid + 1;
                } else {
                    right = mid;
                }
            }
        }
        if (nums[left] == target) return left;
        return -1;
    }
};