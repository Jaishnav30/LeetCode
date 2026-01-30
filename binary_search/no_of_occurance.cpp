#include <bits/stdc++.h>
#include <algorithm>
#include <limits.h>
using namespace std;

template <typename T>
void printVector(const vector<T>& v) {
    cout << "{";
    for (int i = 0; i < (int)v.size(); i++) {
        cout << v[i];
        if (i + 1 < v.size()) cout << ",";
    }
    cout << "}";
}

template <typename T>
void print2DVector(const vector<vector<T>>& grid) {
    cout << "{";
    for (int i = 0; i < grid.size(); i++) {
        printVector(grid[i]);
        if (i + 1 < grid.size()) cout << ",";
    }
    cout << "}";
}

void printString(const string &s) {
    cout << "\"" << s << "\"";
}


// Paste Solution class here
class Solution{
public:
    int lowerBound(const vector<int> &arr, int target){
        int n=arr.size();
        int beg=0, end=n-1;
        int index=n;
        while(beg<=end){
            int mid=(beg+end)/2;
            if(arr[mid]>=target){
                index=mid;
                end=mid-1;
            }
            else{
                beg=mid+1;
            }
        }
        return index;
    }
    int upperBound(const vector<int> &arr, int target){
        int n=arr.size();
        int beg=0, end=n-1;
        int index=n;
        while(beg<=end){
            int mid=(beg+end)/2;
            if(arr[mid]>target){
                index=mid;
                end=mid-1;
            }
            else{
                beg=mid+1;
            }
        }
        return index;
    }
    int countOccurances(const vector<int> &arr, int target){
        int lb=lowerBound(arr, target);
        if(lb==arr.size() || arr[lb]!=target) return 0;
        return (upperBound(arr, target)-1)-lb+1;
    }
};

int main() {
    Solution sol;

    // custom input
    // ex: vector<int> nums = {}; or vector<vector<int>> matrix = {}; 
    vector<int> nums = {1, 1, 2, 2, 2, 2, 3};
    // function call
    // ex: vector<int> res or int res = sol.moveZeroes(nums);
    cout<<sol.countOccurances(nums, 2);
    // output result
    // ex: printVector(res); or printf("%d",res);
    
    return 0;
}