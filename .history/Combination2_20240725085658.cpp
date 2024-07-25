#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>>ans;
    void backTrack(vector<int>& current, vector<int>& candid, int target, int start) {
        if (target == 0) {
            ans.push_back(current);
            return;
        }
        for (int i = start; i < candid.size(); ++i) {
            if (i > start && candid[i] == candid[i - 1])
                continue;
            if (candid[i] > target) 
                break;
            current.push_back(candid[i]);
            backTrack(current, candid, target - candid[i], i + 1);
            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candid, int target) {
        vector<int> current;
        sort(candid.begin(), candid.end());
        backTrack(current, candid, target, 0);
        return ans;
    }
};

