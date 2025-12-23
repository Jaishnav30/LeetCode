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
class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        unordered_map <int,int> mp;
        int presum=0, len=0, n=nums.size();
        for(int i=0; i<n; i++){
            presum+=nums[i];
            if(mp.find(presum)==mp.end())mp[presum]=i;
            if (presum==k) len=i+1;
            else if(mp.find(presum-k)!=mp.end()){
                len=max(len,i-mp[presum-k]);
            }
        }
        return len;
    }
};


int main() {
    Solution sol;

    // custom input
    // ex: vector<int> nums = {}; or vector<vector<int>> matrix = {}; 
    vector<int> nums = {-1, 1, 1};
    // function call
    // ex: vector<int> res or int res = sol.moveZeroes(nums);
    int res = sol.longestSubarray(nums,15);
    // output result
    // ex: printVector(res); or printf("%d",res);
    cout<<res;
    return 0;
}