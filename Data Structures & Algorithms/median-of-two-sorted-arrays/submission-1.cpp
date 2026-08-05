class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) return findMedianSortedArrays(nums2, nums1);
        int m = nums1.size(), n = nums2.size();
        int totalLeft = (m + n + 1) / 2;

        int l = 0, r = m; 


        while(l<=r){
            int partitionA = (l + r) / 2;
            int partitionB = totalLeft - partitionA;
            int nums1left  = (partitionA == 0) ? INT_MIN : nums1[partitionA - 1];
            int nums1right = (partitionA == m) ? INT_MAX : nums1[partitionA];
            int nums2left  = (partitionB == 0) ? INT_MIN : nums2[partitionB - 1];
            int nums2right = (partitionB == n) ? INT_MAX : nums2[partitionB];
            if (nums1left <= nums2right && nums2left <= nums1right) {
                if ((m + n) % 2 == 0) {
                    return (max(nums1left, nums2left) + min(nums1right, nums2right)) / 2.0;
                } else {
                    return max(nums1left, nums2left);
                }
            } else if (nums1left > nums2right) {
                r = partitionA - 1;   
            } else {
                l = partitionA + 1;   
            }
        }
        return 0.0;
    }
};
