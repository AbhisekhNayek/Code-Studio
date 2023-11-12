#include <bits/stdc++.h> 
using namespace std;

long long power(int X , int N)
{

    if(N==0)

        return 1;

    if(N==1)

        return X;

    long long ans = power(X,N/2);

    if(N%2==0)

        return ans*ans;

    else

        return X*ans*ans;    
}

long long Pow(int X, int N)
{
    long long ans = power(X,N);
 
    return ans;
}
