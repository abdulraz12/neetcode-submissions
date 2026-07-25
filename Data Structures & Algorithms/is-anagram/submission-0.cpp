class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, int> seen;

        for(char m : s){
            if (seen.count(m) == 0){
                seen[m] = 1;
            }else{
                seen[m]++;}
            
        }

        for(char m : t){
            if (seen.count(m) == 0 || seen[m] == 0) return false;
            seen[m]--;
        }


        return true;
    }
};
