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
class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        int cnt=0;
        for(int i=0; i<nums.size(); i++){
            int xor_n=0;
            for(int j=i; j<nums.size(); j++){
                xor_n=(xor_n^nums[j]);
                if(xor_n==k) cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    Solution sol;

    // custom input
    // ex: vector<int> nums = {}; or vector<vector<int>> matrix = {}; 
    vector<int> nums = {5,6,7,8,9};
    // function call
    // ex: vector<int> res or int res = sol.moveZeroes(nums);
    
    // output result
    // ex: printVector(res); or printf("%d",res);
    cout<<sol.subarraysWithXorK(nums, 6);
    return 0;
}