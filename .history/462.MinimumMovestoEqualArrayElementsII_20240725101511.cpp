
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
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int len = nums.size(),count = 0;
        int equal = 0;
        if(len%2)
             equal = (len+1)/2 -1;
        else
             equal = int((len/2) -1);
             
        for(int i=0;i<len;i++){
            int diff = abs(nums[i] - nums[equal]);
            count += diff;
        }
        return count;
    }
};