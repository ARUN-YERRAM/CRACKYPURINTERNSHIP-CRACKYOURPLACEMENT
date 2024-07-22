#include<bits/stdc++.h>
#include <iostream>   
#include <fstream>      
#include <string>      
#include <vector>      
#include <map>          
#include <unordered_map>
#include <algorithm>    
#include <functional>   
#include <memory>       
using namespace std;




class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;

        int n = nums.size();
        mp[0]= 1;

        int tot = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            tot += nums[i];
            int r = (tot % k + k)%k;
            if(mp.find(r) != mp.end()){
                ans += mp[r];
                mp[r]++;
            }
            else 
                mp[r] = 1;
        }return ans;
    }
};