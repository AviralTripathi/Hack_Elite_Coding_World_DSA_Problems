#include<bits/stdc++.h>
using namespace std;


void merge(int *arr,int low,int high)
{
int left=low;
int mid=(low+high)/2;
int right=mid+1;
int len1=mid-low+1;
int len2=high-mid;

// creating two dynamic arrays.

int *first=new int[len1];
int *second=new int[len2];

// copy the value of the one block of the divided array.
for(int i=0;i<len1;i++)
{
    first[i]=arr[left++];
}

// copy the value of the another block of sorted arrays.
for(int i=0;i<len2;i++)
{
    second[i]=arr[right++];
}

// finally merge the two sorted arrays.

left=0;
right=0;
int i=low;
while(left<len1 && right<len2)
{
    if(first[left]<second[right])
    {
        arr[i++]=first[left++];
    }
    else
    {
        arr[i++]=second[right++];
    }
}
while(left<len1)
{
    arr[i++]=first[left++];
}
while(right<len2)
{
    arr[i++]=second[right++];
}
}

void mergeSort(int *arr,int low,int high)
{
    if(low>=high)
    return;
    // to get the middle index to divide the array into two halves.
    int mid=(low+high)/2;
    // to get the one half of the array
    mergeSort(arr,low,mid);
    // to get the another half of the array.
    mergeSort(arr,mid+1,high);
    // finally to sort the elements when the divison has taken place completely.
    merge(arr,low,high);

}

int main()
{
    int arr[]={3,1,2,4,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}