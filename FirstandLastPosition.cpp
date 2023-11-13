#include<bits/stdc++.h>

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)

{

    int low = lower_bound(arr.begin() , arr.end() , k) - arr.begin();

    int high = upper_bound(arr.begin() , arr.end() , k) - arr.begin();

    if(arr[low] == k and arr[high -1] == k)

    return {low,high-1};

    else

    return {-1,-1};

}

 
