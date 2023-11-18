#include<bits/stdc++.h>
using namespace std;

int main() {

    int n,a;
    int sEven=0;
    int sOdd=0;
    cin>>n;

    while(n){
        a=n%10;
            if(a%2==0)
            {
                sEven=sEven+a;
            }
            else
            {
                sOdd=sOdd+a;
            }

        n = n/10;

    }
    cout<<sEven<<"\t"<<sOdd;
}
