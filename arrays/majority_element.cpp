#include <bits/stdc++.h>
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
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         map <int,int> mp;
//         int n = nums.size();
//         for(int i:nums){
//             mp[i]++;
//             if (mp[i]>n/2) return i;
//         }
//         return 0;
//     }
// };

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         return nums[nums.size()/2];
//     }
// };

//Moore's voting algorithm
class Solution{
public:
    int majorityElement(vector <int>& nums){
        int cnt=0;
        int ele;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if (cnt==0){
                ele = nums[i];
                cnt++;
            }
            else if (nums[i] == ele){
                cnt++;
            }
            else cnt--;
        }
        return ele;
    }
};

int main() {
    Solution sol;

    // custom input
    // ex: vector<int> nums = {0, 1, 0, 3, 12};
    vector<int> nums = {6,5,5};
    // function call
    // ex: sol.moveZeroes(nums);
    int res = sol.majorityElement(nums);
    // output result
    // ex: printVector(nums); or printf("%d",res);
    printf("%d",res);
    return 0;
}