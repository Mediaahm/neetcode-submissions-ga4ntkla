class Solution {
public:
    int maxArea(vector<int>& heights) {
        int start = 0 ;
        int end = heights.size()-1;  
        int maxCap = 0;
        while(start<end){
            if((end - start)* min(heights[start],heights[end]) > maxCap){
                maxCap = ((end - start)* min(heights[start],heights[end]));  
            }
            if(heights[start] < heights[end]){
                start++;
            }
            else{
                end--;
            }
        }



        return maxCap;







    }
};
