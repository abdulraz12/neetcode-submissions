class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = 0;
        int l = 0;
        unordered_set<char> seen;

        for(int r = 0; r < s.size(); r++){
            
            while(seen.count(s[r])){
                seen.erase(s[l]);
                l++;
                
            }
            seen.insert(s[r]);
            length = max(r-l+1, length);


        }
        return length;
    }
};
