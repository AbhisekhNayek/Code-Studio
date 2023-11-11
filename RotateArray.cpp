#include<iostream>
using namespace std;

void reverse(vector<int>& arr, int s, int e){
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

vector<int> rotateArray(vector<int>arr, int k) {
  
    int n=arr.size();

    if(k>n)
    {
        k=k%n;
    }
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);

    return arr;

}
