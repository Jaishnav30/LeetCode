#include <bits/stdc++.h>
#include <algorithm>
#include <limits.h>
using namespace std;

template <typename T>
void printVector(const vector<T> &v)
{
    cout << "[";
    for (int i = 0; i < (int)v.size(); i++)
    {
        cout << v[i];
        if (i + 1 < v.size())
            cout << ",";
    }
    cout << "]";
}

template <typename T>
void print2DVector(const vector<vector<T>> &grid)
{
    cout << "[";
    for (int i = 0; i < grid.size(); i++)
    {
        printVector(grid[i]);
        if (i + 1 < grid.size())
            cout << ",";
    }
    cout << "]";
}

void printString(const string &s)
{
    cout << "\"" << s << "\"";
}

// Paste Solution class here
class Solution
{
public:
    int revpair(vector<int> nums){
        int n=nums.size();
        int res=0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]>2*nums[j]){
                    res++;
                }
            }
        }
        return res;
    }
};

int main()
{
    Solution sol;

    // custom input
    // ex: vector<int> nums = {}; or vector<vector<int>> matrix = {};
    vector<int> nums = {};
    // function call
    // ex: vector<int> res or int res = sol.moveZeroes(nums);
    int res = sol.revpair(nums);
    // output result
    // ex: printVector(res); or printf("%d",res);
    cout<<res;
    return 0;
}