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
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int idx = 0;
        for(int i=0;i<3;i++){
            for(int j=idx;j<n;j++){
                if(nums[j] == i){
                    swap(nums[j],nums[idx]);
                    idx++;
                }
            }
        }
    }
};