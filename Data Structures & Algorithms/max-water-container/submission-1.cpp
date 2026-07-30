class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0 , j = heights.size() - 1;
        int maxArea = 0;
        int curArea = 0;
        while (i < j){
            curArea = (j - i) * min(heights[i], heights[j]);
            
            if (curArea > maxArea) maxArea = curArea;

            if (heights[i] <= heights[j]) {
                i++;
            } else{
                j--;
            }
        }
        return maxArea;
    }
};
