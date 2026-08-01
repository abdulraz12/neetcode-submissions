class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int length = INT_MAX;
        int l = 0, total = 0;

        for(int r = 0; r < nums.size(); r++){
            total += nums[r];
            while(total >= target){
                length = min(r-l+1, length);
                total -= nums[l];
                l++;
            }
        }

        if (length == INT_MAX) {return 0;}

        return length;
    }
};