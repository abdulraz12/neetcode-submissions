class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> diff;
        int j, i = 0;
        for (i = 0; i < nums.size(); i++){
           j = target - nums[i];
            if (diff.contains(j)){
                return {diff[j], i};

            }
            diff[nums[i]] = i;
        }
        return {};
    }
    
};
