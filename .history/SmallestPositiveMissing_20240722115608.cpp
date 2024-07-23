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



class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        sort(arr,arr+n);
        int i=0;
        int j=1;
        while(arr[i] <= 0)i++;
        for(;i<n;i++){
            if(i>0 && arr[i] == arr[i-1]) continue;
            if(arr[i] != j)
                return j;
            j++;
            // if(i == n)return j+1;
        }
        return j;
    } 
};