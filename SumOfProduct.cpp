#include <bits/stdc++.h> 
long long int sumOrProduct(long long int n, long long int q)
{
    long long int ans=0;
    if(q==1) {

        ans=n*(n+1)/2;
    }
    else {
        ans=1;
        for(int i=1;i<=n;i++) {
            ans*=i;
            ans=ans%1000000007;
        }
    }
    return ans;
}

