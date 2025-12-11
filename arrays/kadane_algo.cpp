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
    vector<int> maxSubArray(vector<int>& nums) {
        int max=INT_MIN,f=0,e=0, start=0;
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            if (sum==0) start=i;
            sum+=nums[i];
            if (sum>max){
                max=sum;
                f=start;
                e=i;
            } 
            if (sum<0) sum=0;
        }
        return vector<int>(nums.begin()+f, nums.begin()+e+1);
    }
};

int main() {
    Solution sol;

    // custom input
    // ex: vector<int> nums = {0, 1, 0, 3, 12};
    vector<int> nums = {-3,1,7,2,-4,9,6,-5};
    // function call
    // ex: sol.moveZeroes(nums);
    vector<int> res = sol.maxSubArray(nums);
    // output result
    // ex: printVector(nums);
    printVector(res);
    return 0;
}