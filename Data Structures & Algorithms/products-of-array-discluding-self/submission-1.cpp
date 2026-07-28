class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int m = nums.size();
        vector<int> prefix(m);
        vector<int> postfix(m);
        vector<int> ans;
        int total = 1;
        for(int i = 0; i < m; i++){
            total *= nums[i];
            prefix[i] = total;
        }
        total = 1;
        for(int i = m-1; i > 0; i--){
            total *= nums[i];
            postfix[i] = total;
        }

        for (int i = 0; i < m; i++){
            int pre = (i == 0) ? 1 : prefix[i-1];
            int post = (i == m-1) ? 1 : postfix[i+1];
            ans.push_back(pre * post);
        }
    
        return ans;
    }

};