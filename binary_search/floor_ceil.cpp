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
class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int n = nums.size();
        int beg = 0, end = n - 1, floor = -1;

        if (x < nums[0])
            return vector<int>{-1, nums[0]};
        else if (x > nums[end])
            return vector<int>{nums[end], -1};

        while (beg <= end)
        {
            int mid = (beg + end) / 2;
            if (nums[mid] <= x)
            {
                floor = mid;
                beg = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        if (nums[floor] == x)
            return vector<int>{x, x};
        else
            return vector<int>{nums[floor], nums[floor + 1]};
    }
};

int main()
{
    Solution sol;

    // custom input
    // ex: vector<int> arr = {}; or vector<vector<int>> matrix = {};
    vector<int> arr = {3, 4, 4, 7, 8, 10};
    // function call
    // ex: vector<int> res or int res = sol.moveZeroes(arr);
    vector<int> res = sol.getFloorAndCeil(arr, 8);
    // output result
    // ex: printVector(res); or printf("%d",res);
    printVector(res);
    return 0;
}