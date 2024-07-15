// 1. Two Sum

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
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int,int>mp;

        for(int i=0;i<n;i++){
            if(mp.find(target-nums[i]) != mp.end()){
                return {i,mp[target-nums[i]]};
            }else{
                mp[nums[i]] = i;
            }
        }return {};
    }
};