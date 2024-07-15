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
    void moveZeroes(vector<int>& nums) {
        int idx = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] != 0){
                // while(idx < n && nums[idx] != 0)idx++;
                // if(idx < n)
                swap(nums[idx],nums[i]);
                idx++;
            }
        }
    }
};