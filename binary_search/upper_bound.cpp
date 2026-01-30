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
    int upperBound(vector<int> &nums, int x)
    {
        // if (x < nums[0])
        //     return 0;
        // int beg = 0, end = nums.size() - 1;
        // while (beg <= end)
        // {
        //     if (beg == end && nums[beg] > x)
        //         return beg;
        //     else
        //     {
        //         int mid = (beg + end) / 2;
        //         if (nums[mid] > x)
        //             end = mid;
        //         else
        //             beg = mid + 1;
        //     }
        // }
        // return nums.size();
        int beg = 0, end = nums.size() - 1, res=nums.size();
        while (beg <= end)
        {
            int mid = (beg + end) / 2;
            if (nums[mid] >= x){
                res = mid;
                end = mid-1;
            }
            else
                beg = mid + 1;
        }
        return res;
    }
};

int main()
{
    Solution sol;

    // custom input
    // ex: vector<int> arr = {}; or vector<vector<int>> matrix = {};
    vector<int> arr = {-9, -5, -3, -2, 0, 2, 3, 5, 46, 89, 100};
    // function call
    // ex: vector<int> res or int res = sol.moveZeroes(arr);
    cout << sol.upperBound(arr, -9);
    // output result
    // ex: printVector(res); or printf("%d",res);

    return 0;
}