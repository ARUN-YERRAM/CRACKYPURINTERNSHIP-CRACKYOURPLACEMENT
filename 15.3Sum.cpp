#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        set<vector<int>>st;
        int n = nums.size();
        int j,k;
        for(int i=0;i<n;i++){
            j = i+1,k=n-1;
            int s = nums[i];
            while(j<k){
                if(s + nums[j]+nums[k] == 0){
                    vector<int>t={s,nums[j],nums[k]};
                    // if(find(ans.begin(),ans.end(),t) == ans.end())
                        st.insert({s,nums[j],nums[k]});
                        j++,k--;
                    // break;
                }else if(s+nums[j]+nums[k] < 0)j++;
                else k--;
            }
        }
        for(auto ti:st)
            ans.push_back(ti);
        return ans;
    }
};