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
    int bs(vector<int> arr, int f, int l, int t){
        if(f>l) return -1;
        int m=(f+l)/2;
        if(arr[m]==t) return m;
        else if (t<arr[m]) return bs(arr, f, m-1, t);
        else return bs(arr, m+1, l,t);
    }
    int search(vector<int>& nums, int target) {
        return bs(nums, 0, nums.size()-1, target);
    }
};

int main() {
    Solution sol;

    // custom input
    // ex: vector<int> nums = {}; or vector<vector<int>> matrix = {}; 
    vector<int> nums = {-1,0,3,5,9,12};
    // function call
    // ex: vector<int> res or int res = sol.moveZeroes(nums);
    cout<<sol.search(nums, 12);
    // output result
    // ex: printVector(res); or printf("%d",res);
    
    return 0;
}