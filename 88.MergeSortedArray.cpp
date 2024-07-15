
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
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1,j=n-1;
        int k = nums1.size()-1;
        while(i>=0 && j>= 0){
            if(nums1[i] >= nums2[j]){
                nums1[k] = nums1[i];
                k--,i--;
            }else{
                nums1[k] = nums2[j];
                k--,j--;
            }
        }
        while(i>=0){
            nums1[k] = nums1[i];
            k--,i--;
        }
        while(j >= 0){
            nums1[k] = nums2[j];
            k--,j--;
        }
    }
};