#include <bits/stdc++.h> 

void posAndNeg(vector<int> &arr)
{
    vector<int>positive;
    vector<int>negative;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>=0)
        {
            positive.push_back(arr[i]);
        }
        else
        {
           negative.push_back(arr[i]);
        }
    }
    int j=0,k=0;
    for(int i=0;i<arr.size();i++)
    {
        if(i%2==0)
        {
            arr[i]=positive[j];

            j++;
        }
        else

        {
            arr[i]=negative[k];
            k++;
        }

    }
}
