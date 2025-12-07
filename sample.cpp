#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3,6,2,9,5,1,7};
    sort(arr, arr+7);
    for(int i: arr){
        cout << i << " ";
    }
    return 0;
}