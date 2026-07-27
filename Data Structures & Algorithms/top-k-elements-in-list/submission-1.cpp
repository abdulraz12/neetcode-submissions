class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<int> ans;
        for (auto num: nums){
            if(count.count(num)== 0){
                count[num] = 1;
            } else {
                count[num]++;
            }
        }
        vector<vector<int>> buckets(nums.size() + 1);
        for (auto& [num, freq] : count){    
            buckets[freq].push_back(num);
        }

        for(int i = buckets.size()-1; i >0; i--){
            for(int num : buckets[i]){
                ans.push_back(num);
                if (ans.size() == k) return ans;
            }
        }
        
        return ans;
    }
};
