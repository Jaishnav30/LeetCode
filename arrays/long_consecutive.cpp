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
    int longestConsecutive(vector<int>& nums) {
        set <int> s;
        int n=nums.size();
        for(int i=0; i<n; i++){
            s.insert(nums[i]);
        }
        vector <int> v;
        for(auto i:s){
            v.push_back(i);
        }
        int len=1, maxlen=1;
        for(int i=0; i<v.size()-1; i++){
            if(v[i+1]==v[i]+1){
                len++;
            }
            else{
                maxlen = max(maxlen,len);
                len=1;
            }
        }
        return maxlen;
    }
};

int main() {
    Solution sol;

    // custom input
    // ex: vector<int> nums = {};
    vector<int> nums = {-3,-1,1,2,4,7,8,9,11};
    // function call
    // ex: sol.moveZeroes(nums);
    int res = sol.longestConsecutive(nums);
    // output result
    // ex: printVector(nums) or printf("%d",);
    printf("%d",res);
    return 0;
}