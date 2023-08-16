/*
Given an array of N integers, count the inversion of the array 
(using merge-sort).

What is an inversion of an array? Definition: for all i & j < size of array, 
if i < j then you have to find pair (A[i],A[j]) such that A[j] < A[i].
Examples
Example 1:
Input Format: N = 5, array[] = {1,2,3,4,5}
Result: 0
Explanation: we have a sorted array and the sorted array 
has 0 inversions as for i < j you will never find a pair such 
that A[j] < A[i]. More clear example: 2 has index 1 and 5 
has index 4 now 1 < 5 but 2 < 5 so this is not an inversion.

Example 2:
Input Format: N = 5, array[] = {5,4,3,2,1}
Result: 10
Explanation: we have a reverse sorted array and we will 
get the maximum inversions as for i < j we will always 
find a pair such that A[j] < A[i]. Example: 5 has index 0 and 
3 has index 2 now (5,3) pair is inversion as 0 < 2 and 5 > 3 which will 
satisfy out conditions and for reverse sorted array we will get maximum 
inversions and that is (n)*(n-1) / 2.
For above given array there is 4 + 3 + 2 + 1 = 10 inversions.

Example 3:
Input Format: N = 5, array[] = {5,3,2,1,4}
Result: 7
Explanation: There are 7 pairs (5,1), (5,3), (5,2), (5,4),(3,2), (3,1), (2,1) 
and we have left 2 pairs (2,4) and (1,4) as both are not satisfy our condition. 


*/


#include<bits/stdc++.h>
using namespace std;


int merge(int *arr,int low,int high)
{
int left=low;
int mid=(low+high)/2;
int right=mid+1;
int len1=mid-low+1; 
int len2=high-mid;
int count=0;

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
        count=mid-left+1;
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
return count;
}

int mergeSort(int *arr,int low,int high)
{
    int count=0;
    if(low>=high)
    return count;
    // to get the middle index to divide the array into two halves.
    int mid=(low+high)/2;
    // to get the one half of the array
    count+=mergeSort(arr,low,mid);
    // to get the another half of the array.
    count+=mergeSort(arr,mid+1,high);
    // finally to sort the elements when the divison has taken place completely.
    count+=merge(arr,low,high);
    return count;

}

int main()
{
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=mergeSort(arr,0,n-1);
    
    cout<<"The numbers of inversions required to make the array sorted: "<<i<<endl;

    cout<<"Sorted array:"<<endl;
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}