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
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        set<int> row, col;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        vector<int> zero(n,0);
        for(auto i:row){
            matrix[i]=zero;
        }
        for(int rows=0; rows<m; rows++){
            for(auto j:col){
                matrix[rows][j]=0;
            }
        }
    }
};

int main() {
    Solution sol;

    // custom input
    // ex: vector<int> nums = {};
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    // function call
    // ex: vector<int> res or int res = sol.moveZeroes(nums);
    sol.setZeroes(matrix);
    // output result
    // ex: printVector(res) or printf("%d",res);
    print2DVector(matrix);
    return 0;
}