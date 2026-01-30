#include <bits/stdc++.h>
#include <algorithm>
#include <limits.h>
using namespace std;

template <typename T>
void printVector(const vector<T>& v) {
    cout << "[";
    for (int i = 0; i < (int)v.size(); i++) {
        cout << v[i];
        if (i + 1 < v.size()) cout << ",";
    }
    cout << "]";
}

template <typename T>
void print2DVector(const vector<vector<T>>& grid) {
    cout << "[";
    for (int i = 0; i < grid.size(); i++) {
        printVector(grid[i]);
        if (i + 1 < grid.size()) cout << ",";
    }
    cout << "]";
}

void printString(const string &s) {
    cout << "\"" << s << "\"";
}


// Paste Solution class here
class Solution {
  public:
    int maxLength(vector<int>& arr) {
        unordered_map<int, int> mp;
        int n = arr.size();
        int sum = 0;
        int maxlen = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum == 0)
                maxlen = i + 1;
            else
            {
                if (mp.find(sum) != mp.end())
                    maxlen = max(maxlen, i - mp[sum]);
                else
                    mp[sum] = i; // or mp.insert({sum,i})
            }
        }
        return maxlen;
    }
};

int main() {
    Solution sol;

    // custom input
    // ex: vector<int> nums = {}; or vector<vector<int>> matrix = {}; 
    vector<int> nums = {15, -2, 2, -8, 1, 7, 10, 23};
    // function call
    // ex: vector<int> res or int res = sol.moveZeroes(nums);
    int res = sol.maxLength(nums);
    // output result
    // ex: printVector(res); or printf("%d",res);
    cout<<res;
    return 0;
}