#include<bits/stdc++.h>
using namespace std;

bool checkSortedRotated(int *arr,int n)
{
    int count=0;
    for(int i=1;i<n;i++)
    {
        // this condition will check for sorted and rotated.
        if(arr[i-1]>arr[i])
        count++;

    }
    // this condition will check for the cyclic pair.
    if(arr[n-1]>arr[0])
    count++;
    // will return true only if the count is less than or equal to 1.
    return count<=1;
}

int main()
{
    int arr[]={2,1,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool result=checkSortedRotated(arr,n);
    cout<<"is sorted and rotated or not: "<<result;
}