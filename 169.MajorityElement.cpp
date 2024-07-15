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
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n == 1)return nums[0];
        return nums[n/2];
    }
};

