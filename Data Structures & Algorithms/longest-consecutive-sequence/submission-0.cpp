class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> cons(nums.begin(), nums.end());
        int longest = 0;

        for (int num : cons) {
            if (cons.find(num - 1) == cons.end()) {
                int currentNum = num;
                int currentStreak = 1;

                while (cons.find(currentNum + 1) != cons.end()) {
                    currentNum += 1;
                    currentStreak += 1;
                }

                longest = max(longest, currentStreak);
            }
        }
        return longest;
    }
};
