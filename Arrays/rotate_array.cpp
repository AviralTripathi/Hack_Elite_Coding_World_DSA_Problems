#include<bits/stdc++.h>
using namespace std;

void rotateArray(int *arr,int n,int k)
{
    int temp[n];
    for(int i=0;i<n;i++)
    {
        temp[(i+k)%n]=arr[i];
    }
    // this needs to be done regarding the in place solution.
    for(int i=0;i<n;i++)
    arr[i]=temp[i];
}

void printArray(int *arr,int n)
{
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
}

int main()
{
    int arr[]={1,7,9,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    // here k means the number of times the array needs to be rotated.
    int k=2;
    rotateArray(arr,n,k);
    printArray(arr,n);
}