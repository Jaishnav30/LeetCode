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
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        set<vector<int>> s;
        vector<vector<int>> res;
        for (auto i : intervals)
            s.insert(i);
        for (auto i : s)
        {
            int s = i[0];
            int e = i[1];
            if (res.empty() || s > res.back()[1])
            {
                res.push_back(i);
                continue;
            }
            if (s <= res.back()[1])
                res.back()[1] = max(e, res.back()[1]);
        }
        return res;
    }
};

int main()
{
    Solution sol;

    // custom input
    // ex: vector<int> nums = {}; or vector<vector<int>> matrix = {};
    vector<vector<int>> intervals = {{1,4},{4,5}};
    // function call
    // ex: vector<int> res or int res = sol.moveZeroes(nums);
    vector<vector<int>> res = sol.merge(intervals);
    // output result
    // ex: printVector(res); or printf("%d",res);
    print2DVector(res);
    return 0;
}