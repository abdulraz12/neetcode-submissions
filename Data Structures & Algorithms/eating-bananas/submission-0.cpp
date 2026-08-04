class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxP = *max_element(piles.begin(), piles.end());

        int l = 1, r = maxP;
        int minR = 1;

        while(l <= r){
            int k = (l+r)/2;

            int total = 0;
            for (int i = 0; i < piles.size(); i++) {
                total += (piles[i] + k - 1) / k;
            }

            if(total <= h){
                r = k - 1;
                minR = k;
            }else{
                l = k+1;
            }

        }

    return minR;
    }
};
