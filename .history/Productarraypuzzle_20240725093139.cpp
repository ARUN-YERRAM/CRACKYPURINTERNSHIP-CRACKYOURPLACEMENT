class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here 
        vector<long long int>ans;
        long long int tot=1,t=1,c=0;
        
        for(auto it:nums){
            if(it == 0)c++;
            tot *= it;
            if(it!=0)t*=it;
        }
        if(c>1){
            for(int i=0;i<n;i++)
            ans.push_back(0);
            return ans;
        }
        
        for(auto it:nums)
            if(it != 0)
            ans.push_back(tot/it);
            else ans.push_back(t);
        
        return ans;
    }
};
