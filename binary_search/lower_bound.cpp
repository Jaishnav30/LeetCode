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
    int lowerBound(vector<int> &arr, int target)
    {
        if (target<arr[0]) return 0;
        int beg = 0, end = arr.size() - 1;
        while (beg <= end)
        {
            if (beg == end && arr[beg] >= target)
                return beg;
            else
            {
                int mid = (beg + end) / 2;
                if (arr[mid] >= target)
                    end = mid;
                else
                    beg = mid + 1;
            }
        }
        return -1;
    }
};

int main()
{
    Solution sol;

    // custom input
    // ex: vector<int> arr = {}; or vector<vector<int>> matrix = {};
    vector<int> arr = {-9,-5,-3,-2,0,2,3,5,46,89,100};
    // function call
    // ex: vector<int> res or int res = sol.moveZeroes(arr);
    cout << sol.lowerBound(arr, -4);
    // output result
    // ex: printVector(res); or printf("%d",res);

    return 0;
}