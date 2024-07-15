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
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        int j = 1;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                nums[j] = nums[i];
                j++;
            }
        }return j;
    }
};