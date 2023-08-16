#include<bits/stdc++.h>
using namespace std;


bool isSorted(int arr[],int n)
{
    // checking if the array has no elements or just one element.
    if(n==0 || n==1)
    return true;
    // checking the if the two elements are in sorted or not.
    else if(arr[0]>arr[1])
    return false;
    // recursively calling to check for further elements in an array.
    else
    return isSorted(arr+1,n-1);
}


int main()
{
    int arr[]={24,31,45,56,67,78,81,93};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool result=isSorted(arr,n);
    cout<<"Result of being is sorted or not: "<<result;
}