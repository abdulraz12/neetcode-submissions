class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> maxArr(arr.size()); 
        int r = -1;
        for (int i = arr.size() - 1; i >= 0; i--){
            maxArr[i] = r;
            r = max(r, arr[i]);
        }

        return maxArr;
    }
};