class Solution {
public:
    int findMin(vector<int> &nums) {
       int l = 0, r = nums.size() - 1;
       int minN = nums[0];

        while (l <= r){
            int mid = (r+l) / 2;
            minN = min(minN, nums[mid]);

            if(nums[mid] > nums[r]){
                l = mid + 1;

            } else{
                r = mid - 1;
            }

        
        }
        return minN;
    }
};