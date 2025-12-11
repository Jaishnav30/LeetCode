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
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector <int>na(n,0);
        int pitr=0, nitr=1;
        for(int i:nums){
            if (i>0){
                na[pitr]=i;
                pitr+=2;
            }
            else{
                na[nitr]=i;
                nitr+=2;
            }
        }
        return na;
    }
};

int main() {
    Solution sol;

    // custom input
    // ex: vector<int> nums = {};
    vector<int> nums = {3,1,-2,-5,2,-4};
    // function call
    // ex: sol.moveZeroes(nums);
    vector <int> res = sol.rearrangeArray(nums);
    // output result
    // ex: printVector(nums) or printf("%d",);
    printVector(res);
    return 0;
}