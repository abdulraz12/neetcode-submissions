class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        unordered_map<char, int> freq;
        int maxCount = 0;
        int maxLength = 0;


        for(int r = 0; r < s.size(); r++){
            freq[s[r]]++;
            maxCount = max(maxCount, freq[s[r]]);

            while((r-l+1) - maxCount > k){
                freq[s[l]]--;
                l++;
            }


            maxLength = max(r-l+1, maxLength);
        }
        return maxLength;
    }
};
