#include <bits/stdc++.h> 

int minSubarraySum(int arr[], int n, int k) 
{
    int sum =0;
    int mini = INT_MAX;

    for(int i  =0 ;i<k;i++)
    {
        sum += arr[i]; 
    }

    mini = min(mini,sum);

    for(int i =k;i<n;i++)
    {

        sum = sum+arr[i];
        sum = sum - arr[i-k];
        mini = min(mini,sum);
    }
    return mini;
}
