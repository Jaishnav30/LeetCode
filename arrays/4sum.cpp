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
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        int n = nums.size();
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 3; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < n - 2; j++)
            {
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;
                int k = j + 1;
                int l = n - 1;
                int prv_k = INT32_MIN;
                while (k < l)
                {
                    if (nums[k] == prv_k)
                    {
                        k++;
                        continue;
                    }
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if (sum == target)
                    {
                        res.push_back({nums[i], nums[j], nums[k], nums[l]});
                        prv_k = nums[k];
                        k++;
                        l--; //check
                    }
                    else if (sum < target)
                        k++;
                    else
                        l--;
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
    vector<int> nums = {-3,-1,0,2,4,5};
    // function call
    // ex: vector<int> res or int res = sol.moveZeroes(nums);
    vector<vector<int>> res = sol.fourSum(nums, 2);
    // output result
    // ex: printVector(res); or printf("%d",res);
    print2DVector(res);
    return 0;
}