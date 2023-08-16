#include<bits/stdc++.h>
using namespace std;

// recursive function for insertion sort.

void insertionSort(int *arr,int first,int second,int n)
{
    if(first>=n)
    return;
    else if(second>0 && arr[second-1]>arr[second])
    {
        swap(arr[second-1],arr[second]);
        insertionSort(arr,first,second-1,n);

    }
    else
    insertionSort(arr,first+1,first+1,n);
}

// recursive function to print the array.

void printArray(int *arr,int start,int n)
{
    if(start>=n)
    return;
    else
    {
        cout<<*(arr+start)<<" ";
        printArray(arr,start+1,n);
    }
}

int main()
{
    int arr[]={23,49,67,56,12,1,4,2,21,17,81,100,97};
    int n=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,0,n);
    cout<<endl;
    insertionSort(arr,0,0,n);
    printArray(arr,0,n);
}