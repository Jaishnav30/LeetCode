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
    int singleNumber(vector<int>& nums) {
        int x = 0;
        for(int i : nums){
            x ^= i;
        }
        return x;
    }
};

int main() {
    Solution sol;

    // custom input
    // ex: vector<int> nums = {0, 1, 0, 3, 12};
    vector<int> nums = {5,4,4,1,2,1,2};
    // function call
    // ex: sol.moveZeroes(nums);
    int res = sol.singleNumber(nums);
    // output result
    // ex: printVector(nums);
    printf("%d", res);
    return 0;
}