#include <bits/stdc++.h>

int f(int n,vector<int> & h,vector<int>&dp)
{
    if(dp[n]!=-1) return dp[n];
    int first = f(n-1,h,dp)+abs(h[n]-h[n-1]);
    int second = INT_MAX;
    if(n>1)
    second=f(n-2,h,dp)+abs(h[n]-h[n-2]);

    return dp[n] = min(first,second);
}

int frogJump(int n, vector<int> &heights)
{
    vector<int>dp(n,-1);
    dp[0]=0;
    return f(n-1,heights,dp);

}
