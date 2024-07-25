class Solution {
public:
    vector<vector<int>>ans;
    void Recrse(vector<int>&nums,int i,int n,vector<int>&t){
        if(i >= n){
            // sort(t.begin(),t.end());
            if(find(ans.begin(),ans.end(),t) == ans.end())
                ans.push_back(t);
            return;
        }
        t.push_back(nums[i]);
        Recrse(nums,i+1,n,t);
        t.pop_back();
        Recrse(nums,i+1,n,t);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        vector<int>t;
        sort(nums.begin(),nums.end());
        Recrse(nums,0,n,t);
        return ans;
    }
};