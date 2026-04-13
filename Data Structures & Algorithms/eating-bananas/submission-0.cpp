class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1; 
        int right = *max_element(piles.begin(), piles.end());
        int mid;
    
        while(left<right){
            int totalHours = 0;
            mid = ((right - left)/2) + left;
            for(int i = 0; i< piles.size(); i++){
                totalHours += (mid+piles[i]-1)/mid;
            }

            if(totalHours > h){
                left = mid + 1;
            }
            else if(totalHours<= h){
                right = mid;
            }
        }

        return left;
        
    }
};
