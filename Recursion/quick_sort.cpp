#include<bits/stdc++.h>
using namespace std;

// function to get the index of the pivot when the array will be sorted

int getPivotIndex(int arr[],int start,int end)
{
    int pivot=arr[start];
    int i=start,j=end;
    while(i<j)
    {
        // because if we do i<=end then it will come out the array
        // out of bounds
        while(arr[i]<=pivot && i<=end-1)
        {
            // pointer i will stop when it will find 
            // an element greater than pivot.
            i++;
        }
        while(arr[j]>pivot && j>=start+1)
        {
            // pointer j will stop when it will find
            // an element smaller than pivot.
            j--;
        }
        if(i<j)
        swap(arr[i],arr[j]);

    }
    swap(arr[start],arr[j]);
    return j;

}

// recursive function quick sort

void quickSort(int arr[],int start,int end)
{
    if(start<end)
    {
        int partition=getPivotIndex(arr,start,end);
        quickSort(arr,start,partition-1);
        quickSort(arr,partition+1,end);
    }
}

// function to print the given/sorted array

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}


int main()
{
    int arr[]={4,6,2,5,7,9,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    printArray(arr,n);

}