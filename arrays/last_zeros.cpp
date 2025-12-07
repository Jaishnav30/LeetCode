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
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=0; 
        while (j<nums.size()) {
            if (nums[j] != 0) {
                nums[i++] = nums[j];
            }
            j++;
        }
        while(i<nums.size()) nums[i++]=0;
    }
};

int main() {
    Solution sol;

    // custom input
    // ex: vector<int> nums = {0, 1, 0, 3, 12};
    vector<int> nums = {0, 2, 0, 0, 4, 0, 6};

    // function call
    // ex: sol.moveZeroes(nums);
    sol.moveZeroes(nums);

    // output result
    // ex: printVector(nums);
    ex: printVector(nums);

    return 0;
}