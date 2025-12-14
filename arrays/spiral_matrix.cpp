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
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<vector<int>>& mt = matrix;
        int m=matrix.size();
        int n=matrix[0].size();
        int t=0, l=0, b=m-1, r=n-1;
        vector<int> res; 
        while(t<=b && l<=r){
            for(int i=l; i<=r; i++) res.emplace_back(mt[t][i]);
            t++;
            for(int i=t; i<=b; i++) res.emplace_back(mt[i][r]);
            r--;
            if (t<=b){
                for(int i=r; i>=l; i--) res.emplace_back(mt[b][i]);
                b--;
            }
            if(l<=r){
                for(int i=b; i>=t; i--) res.emplace_back(mt[i][l]);
                l++;
            }
        } 
        return res;
    }
};

int main() {
    Solution sol;

    // custom input
    // ex: vector<int> nums = {}; 
    vector<vector<int>> nums = {{1,2,3,4},{5,6,7,8},{9,10,11,12}}; 
    // function call
    // ex: vector<int> res or int res = sol.moveZeroes(nums);
    vector<int> res = sol.spiralOrder(nums);
    // output result
    // ex: printVector(res) or printf("%d",res);
    printVector(res);
    return 0;
}   