#include <bits/stdc++.h> 
using namespace std;

int findDuplicate(vector<int> &arr) 
{
   int n = arr.size()-1;
   n = ((n*(n+1))/2);
    int sum =0;
   for(int i=0;i<arr.size();i++)
   {
       sum+=arr[i];
   }
	return (sum-n);
}
