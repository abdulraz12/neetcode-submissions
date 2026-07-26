class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> dic;

        for(string s: strs){
            string sorted_s = s;
            sort(sorted_s.begin(), sorted_s.end());
            dic[sorted_s].push_back(s);
        }

        vector<vector<string>> result;
        for (auto const& [key, val] : dic) {
            result.push_back(val);
        }
        return result;
    }
};