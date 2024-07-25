class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int>ans;

        int n = nums.size();

        for(int i=0;i<n;i++){
            int c = 0;
            for(int j=i+1;j<n;j++){
                if(nums[i] > nums[j])c++;
            }ans.push_back(c);
        }
        return ans;
    }
};