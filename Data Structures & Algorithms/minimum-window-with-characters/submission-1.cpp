class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> freq;
        unordered_map<char, int> count;
        int l = 0;
        int minLength = s.size() + 1;
        

        if (t.size() > s.size()) return "";

        for(auto c: t){
            freq[c]++;
        }
        int have = 0; 
        int need = freq.size();
        int resultStart = 0;
        for(int r = 0; r < s.size(); r++){
            count[s[r]]++;

            if(freq.count(s[r]) && count[s[r]] == freq[s[r]]){
                have++;
            }
            while(have == need){
                if (r - l + 1 < minLength){
                    minLength = r-l+1;
                    resultStart = l;
                }
                if(freq.count(s[l]) && count[s[l]] == freq[s[l]]){
                    have--;
                }
                count[s[l]]--;
                l++;
                
            }
          

            
        }

        return minLength == s.size() + 1 ? "": s.substr(resultStart, minLength);
    }
};
