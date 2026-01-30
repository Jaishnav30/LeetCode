#include <bits/stdc++.h>
#include <algorithm>
#include <limits.h>
using namespace std;

template <typename T>
void printVector(const vector<T> &v)
{
    cout << "{";
    for (int i = 0; i < (int)v.size(); i++)
    {
        cout << v[i];
        if (i + 1 < v.size())
            cout << ",";
    }
    cout << "}";
}

template <typename T>
void print2DVector(const vector<vector<T>> &grid)
{
    cout << "{";
    for (int i = 0; i < grid.size(); i++)
    {
        printVector(grid[i]);
        if (i + 1 < grid.size())
            cout << ",";
    }
    cout << "}";
}

void printString(const string &s)
{
    cout << "\"" << s << "\"";
}

// Paste Solution class here
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int beg=0, end=n-1;
        int mini=INT_MAX;
        while(beg<=end){
            int mid=(beg+end)/2;
            if(nums[beg]<=nums[mid]){
                mini=min(mini, nums[beg]);
                beg=mid+1;
            }
            else{
                mini=min(mini, nums[mid]);
                end=mid-1;
            }
        }
        return mini;
    }
};

int main()
{
    Solution sol;

    // custom input
    // ex: vector<int> nums = {}; or vector<vector<int>> matrix = {};
    vector<int> nums = {3,4,5,0,1,2};
    // function call
    // ex: vector<int> res or int res = sol.moveZeroes(nums);
    cout<<sol.findMin(nums);
    // output result
    // ex: printVector(res); or printf("%d",res);

    return 0;
}