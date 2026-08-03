class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0;
        int high = matrix[0].size() - 1;

        for(int r = 0; r < matrix.size(); r++){
            low = 0; high = matrix[0].size() - 1;
            while(low <= high){
                int mid = (high+low)/2;
                if(target > matrix[r][mid]){
                    low = mid + 1;
                }else if (target < matrix[r][mid]){
                    high = mid - 1;
                }else{
                    return true;
                }
            }
   
        }
        return false;
    }
};
