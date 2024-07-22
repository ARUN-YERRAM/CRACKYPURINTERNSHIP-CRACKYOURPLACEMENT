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
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int num = nums[0];
        for(int i = 0 ; i <= num ; i++) {
            if(num >= n-1) return true;
            num = max(num , i + nums[i]);
        }
        return false;
    }
};