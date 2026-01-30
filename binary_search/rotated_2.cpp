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
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int beg=0, end=n-1;
        while(beg<=end){
            int mid=(beg+end)/2;
            if(nums[mid]==target) return true;
            if(nums[beg]==nums[mid] && nums[mid]==nums[end]){
                beg++; end--;continue;
            }
            if(nums[mid]>=nums[beg]){
                if(target<nums[mid] && target>= nums[beg])
                    end=mid-1;
                else
                    beg=mid+1;
            }
            else{
                if(target>nums[mid] && target<= nums[end])
                    beg=mid+1;
                else
                    end=mid-1;
            }
        }
        return false;
    }
};

int main() {
    Solution sol;

    // custom input
    // ex: vector<int> nums = {}; or vector<vector<int>> matrix = {}; 
    
    vector<int> nums = {5,5,1,5,5,5,5};
    // function call
    // ex: vector<int> res or int res = sol.moveZeroes(nums);
    cout<<sol.search(nums,1);
    // for(auto i:nums){
    //     cout<<i<<" : "<<sol.search(nums,i)<<endl;
    // }
    // output result
    // ex: printVector(res); or printf("%d",res);
    
    return 0;
}