/*
Problem Statement: You’re given an unsorted array arr of n integers 
and an integer x. Find the floor and ceiling of x in arr[0..n-1].
The floor of x is the largest element in the array which is 
smaller than or equal to x.
The ceiling of x is the smallest element in the array greater 
than or equal to x.

Example 1:
Input Format: n = 6, arr[] ={3, 4, 4, 7, 8, 10}, x= 5
Result: 4 7
Explanation: The floor of 5 in the array is 4, and 
the ceiling of 5 in the array is 7.

Example 2:
Input Format: n = 6, arr[] ={3, 4, 4, 7, 8, 10}, x= 8
Result: 8 8
Explanation: The floor of 8 in the array is 8, and the 
ceiling of 8 in the array is also 8.

*/


#include<bits/stdc++.h>
using namespace std;

// to find the floor of the key element.

int floor(int arr[],int n,int key)
{
int start=0;int end=n-1; int ans=-1;
// to take into consideration that start and end 
//and eventually mid should not overflow beyond the range of int.
int mid=start+(end-start)/2;
while(start<=end)
{
    if(arr[mid]==key)
    {
        ans=arr[mid];
        return ans;
    }
    else if(arr[mid]<key)
    {
        ans=arr[mid];
        start=mid+1;
    }
    else{
    end=mid-1;
    }
    mid=start+(end-start)/2;
}
return ans;
}

// to find the ceil of the key element

int ceil(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
        ans=arr[mid];
        return ans;
        }
        else if(arr[mid]>key)
        {
            ans=arr[mid];
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int arr[]={3, 4, 4, 7, 8, 10};
    int key=8;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result_floor=floor(arr,n,key);
    int result_ceil=ceil(arr,n,key);
    cout<<"Result: "<<result_floor<<" "<<result_ceil;
}