class NumArray {

public:
    vector<int> prefix_;
    NumArray(vector<int>& nums) {
        int total = 0;
        for (int n : nums) {
            total += n;
            prefix_.push_back(total);
        }
    }
    
    
    int sumRange(int left, int right) {
        
        int preRight = prefix_[right];
        int preLeft = left > 0 ? prefix_[left - 1] : 0;
        return preRight - preLeft;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */