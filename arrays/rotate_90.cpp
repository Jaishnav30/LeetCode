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
    void reverse(vector<int>& v){
        for(int i=0, j=v.size()-1; i<v.size()/2; i++, j--){
            int t=v[i];
            v[i]=v[j];
            v[j]=t;
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                int tmp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = tmp;
            }
        }
        for(auto row : matrix){
            reverse(row);
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
    sol.rotate(matrix);
    // output result
    // ex: printVector(res) or printf("%d",res);
    print2DVector(matrix);
    return 0;
}