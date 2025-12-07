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
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0, j = 0, win_sz = 0, n = nums.size();
        while (i < n) {
            if (nums[i] == 1) {
                j = i + 1;
                while (j < n && nums[j] == 1) j++;
                win_sz = max(win_sz, j - i); 
                i = j;  
            } else {
                i++;
            }
        }
        return win_sz;
    }
};


int main() {
    Solution sol;

    // custom input
    // ex: vector<int> nums = {0, 1, 0, 3, 12};
    vector<int> nums = {0,1,1,0,1,1,1,1,1,0,0,1,1,1};

    // function call
    // ex: sol.moveZeroes(nums);
    int num = sol.findMaxConsecutiveOnes(nums);
    // output result
    // ex: printVector(nums);
    printf("%d", num);
    return 0;
}