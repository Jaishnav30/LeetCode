#include <bits/stdc++.h>
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
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if (mp.find(target - nums[i]) != mp.end()){
                return {mp.find(target - nums[i])->second, i};
            }
            mp[nums[i]]=i;
        }
        return{};
    }
};

int main() {
    Solution sol;

    // custom input
    // ex: vector<int> nums = {0, 1, 0, 3, 12};
    vector<int> nums = {5,7,10,2,1};
    int target = 11;
    // function call
    // ex: sol.moveZeroes(nums);
    nums = sol.twoSum(nums, target);
    // output result
    // ex: printVector(nums);
    printVector(nums);
    return 0;
}