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
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int, int> mp;
        for(int i:nums){
            mp[i]++;
        }
        vector<int> res;
        for(auto i:mp){
            if (i.second>n/3){
                res.push_back(i.first);
            }
        }
        return res;
    }
};

int main() {
    Solution sol;

    // custom input
    // ex: vector<int> nums = {}; or vector<vector<int>> matrix = {}; 
    vector<int> nums = {1,2,4,4,4,4,3,3,3,3};
    // function call
    // ex: vector<int> res or int res = sol.moveZeroes(nums);
    vector<int> res = sol.majorityElement(nums);
    // output result
    // ex: printVector(res); or printf("%d",res);
    printVector(res);
    return 0;
}