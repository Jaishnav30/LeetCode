#include <bits/stdc++.h>
#include <algorithm>
#include <limits.h>
using namespace std;

template <typename T>
void printVector(const vector<T>& v) {
    cout << "{";
    for (int i = 0; i < (int)v.size(); i++) {
        cout << v[i];
        if (i + 1 < v.size()) cout << ",";
    }
    cout << "}";
}

template <typename T>
void print2DVector(const vector<vector<T>>& grid) {
    cout << "{";
    for (int i = 0; i < grid.size(); i++) {
        printVector(grid[i]);
        if (i + 1 < grid.size()) cout << ",";
    }
    cout << "}";
}

void printString(const string &s) {
    cout << "\"" << s << "\"";
}


// Paste Solution class here
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int beg=1, end=n-2;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;
        while(beg<=end){
            int mid=(beg+end)/2;
            if(nums[mid]<nums[mid+1]){
                beg=mid+1;
            }
            else if(nums[mid]<nums[mid-1]){
                end=mid-1;
            }

        }
    }
};

int main() {
    Solution sol;

    // custom input
    // ex: vector<int> nums = {}; or vector<vector<int>> matrix = {}; 
    
    // function call
    // ex: vector<int> res or int res = sol.moveZeroes(nums);
    
    // output result
    // ex: printVector(res); or printf("%d",res);
    
    return 0;
}