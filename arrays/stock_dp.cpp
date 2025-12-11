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
    int maxProfit(vector<int> &prices)
    {
        int mini=prices[0];
        int maxi=0;
        int n=prices.size();
        for (int i=0; i<n; i++)
        {
            int cost=prices[i]-mini;
            maxi=max(maxi,cost);
            mini=min(mini,prices[i]);
        }
        return maxi;
    }
};

int main()
{
    Solution sol;

    // custom input
    // ex: vector<int> nums = {};
    vector<int> prices = {150, 200, 0, 5};
    // function call
    // ex: sol.moveZeroes(nums);
    int res = sol.maxProfit(prices);
    // output result
    // ex: printVector(nums);
    printf("%d", res);
    return 0;
}