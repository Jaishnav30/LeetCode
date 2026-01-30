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
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int beg=0, end=n-1;
        int mini=INT_MAX;
        while(beg<=end){
            if(beg==end) return nums[beg];
            int mid=(beg+end)/2;
            if(mid%2!=0){
                if(nums[mid]==nums[mid+1]){
                    end=mid-1;
                }
                else if(nums[mid]==nums[mid-1]){
                    beg=mid+1;
                }
                else return nums[mid];
            }
            else{
                if(nums[mid]==nums[mid+1]){
                    beg=mid+2;
                }
                else if(nums[mid]==nums[mid-1]){
                    end=mid-2;
                }
                else return nums[mid];
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;

    // custom input
    // ex: vector<int> nums = {}; or vector<vector<int>> matrix = {}; 
    vector<int> nums = {1,2,2,3,3};
    // function call
    // ex: vector<int> res or int res = sol.moveZeroes(nums);
    cout<<sol.singleNonDuplicate(nums);
    // output result
    // ex: printVector(res); or printf("%d",res);
    
    return 0;
}