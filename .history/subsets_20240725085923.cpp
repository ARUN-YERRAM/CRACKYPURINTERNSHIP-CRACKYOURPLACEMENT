class Solution {
public:
    vector<vector<int>>ans;
    void Recrse(vector<int>nums,int i,int n,vector<int>&t){
        if(i>=n){
            ans.push_back(t);
            return;
        }
        t.push_back(nums[i]);
        Recrse(nums,i+1,n,t);
        t.pop_back();
        Recrse(nums,i+1,n,t);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int>t;
        Recrse(nums,0,n,t);
        return ans;
    }
};