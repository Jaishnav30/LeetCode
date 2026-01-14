#include <bits/stdc++.h>
#include <algorithm>
#include <limits.h>
using namespace std;

template <typename T>
void printVector(const vector<T>& v) {
    cout << "[";
    for (int i = 0; i < (int)v.size(); i++) {
        cout << v[i];
        if (i + 1 < v.size()) cout << ",";
    }
    cout << "]";
}

template <typename T>
void print2DVector(const vector<vector<T>>& grid) {
    cout << "[";
    for (int i = 0; i < grid.size(); i++) {
        printVector(grid[i]);
        if (i + 1 < grid.size()) cout << ",";
    }
    cout << "]";
}

void printString(const string &s) {
    cout << "\"" << s << "\"";
}


// Paste Solution class here
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // set<vector<int>> res;
        // int n=nums.size();
        // for(int i=0; i<n-2; i++){
        //     set<int> tmp;
        //     for(int j=i+2; j<n; j++){
        //         tmp.insert(nums[j-1]);
        //         int othr=-(nums[i]+nums[j]);
        //         if(tmp.find(othr)!=tmp.end()){
        //             vector<int>v = {nums[i],nums[j],othr};
        //             sort(v.begin(), v.end());
        //             res.insert(v);
        //         }
        //     }
        // }
        // vector<vector<int>> fres(res.begin(), res.end());
        // return fres;

        int n=nums.size();
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-2; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=n-1;
            int prv_j=INT32_MIN;
            while(j<k){
                if(nums[j]==prv_j){
                    j++;
                    continue;
                } 
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    res.push_back({nums[i], nums[j], nums[k]});
                    prv_j=nums[j];
                    j++;
                }
                else if(sum<0) j++;
                else k--;
            }
        }
        return res;
    }
};

int main() {
    Solution sol;

    // custom input
    // ex: vector<int> nums = {}; or vector<vector<int>> matrix = {}; 
    vector<int> nums = {-6, -4, -2, 0, 0, 2, 4, 6};
    // function call
    // ex: vector<int> res or int res = sol.moveZeroes(nums);
    vector<vector<int>> res = sol.threeSum(nums);
    // output result
    // ex: printVector(res); or printf("%d",res);
    print2DVector(res);
    return 0;
}