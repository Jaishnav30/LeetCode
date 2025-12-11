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
    void sortColors(vector<int>& nums) {
        int cnt0=0, cnt1=0, cnt2=0;
        for(int i:nums){
            if (i==0) cnt0++;
            else if (i==1) cnt1++;
            else cnt2++;
        }
        int i = 0;
        while (cnt0--) nums[i++] = 0;
        while (cnt1--) nums[i++] = 1;
        while (cnt2--) nums[i++] = 2;
    }
};

int main() {
    Solution sol;

    // custom input
    // ex: vector<int> nums = {0, 1, 0, 3, 12};
    vector<int> nums = {2,0,2,1,1,0};
    // function call
    // ex: sol.moveZeroes(nums);
    sol.sortColors(nums);
    // output result
    // ex: printVector(nums);
    printVector(nums);
    return 0;
}