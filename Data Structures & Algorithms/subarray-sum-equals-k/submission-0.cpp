class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSums;
        int res = 0, curSum = 0;

        prefixSums[0] = 1;

        for (int n : nums){
            curSum += n;
            int diff = curSum - k;

            res += prefixSums[diff];
            prefixSums[curSum]++;
        }
      
        return res;


    }
};