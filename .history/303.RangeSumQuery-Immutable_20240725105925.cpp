#include <vector>
using namespace std;

class NumArray {
private:
    vector<int> prefixSums;
public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        prefixSums.resize(n + 1, 0);
        for (int i = 0; i < n; ++i)
            prefixSums[i + 1] = prefixSums[i] + nums[i];
    }
    
    int sumRange(int left, int right) {
        return prefixSums[right + 1] - prefixSums[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
