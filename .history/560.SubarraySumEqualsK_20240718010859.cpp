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
    int subarraySum(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());

        int sum = 0;
        map<int,int>mp;
        int tot = 0;
        mp[0] = 1;
        for(auto it:nums){
            sum += it;
            // if(mp.find(sum) != mp.end()){
            //     mp[sum]++;
                // tot++;
            if(mp.find(sum-k)!=mp.end())
                tot+= mp[sum-k];
            
            mp[sum] += 1; 
                // mp[sum] = 1;
        }
        return tot;
    }
};