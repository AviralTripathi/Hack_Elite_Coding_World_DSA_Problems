/*
Problem Statement: You are given a sorted array arr of 
distinct values and a target value x. 
You need to search for the index of the target value in the array.

If the value is present in the array, then return its index. 
Otherwise, determine the index where it would be inserted in the array 
while maintaining the sorted order.

Example 1:
Input Format: arr[] = {1,2,4,7}, x = 6
Result: 3
Explanation: 6 is not present in the array. So, if we will insert 6 in the 3rd index(0-based indexing), the array will still be sorted. {1,2,4,6,7}.

Example 2:
Input Format: arr[] = {1,2,4,7}, x = 2
Result: 1
Explanation: 2 is present in the array and so we will return its index i.e. 1.

*/

#include<bits/stdc++.h>
using namespace std;
int search_position(int arr[],int n,int key)
{
    int start=0;int end=n-1; int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]>key)
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }

        mid=start+(end-start)/2;
    }
    return ans;

}
int main()
{
int arr[]={1,2,4,7};
int key=2;
int n=sizeof(arr)/sizeof(arr[0]);
int result=search_position(arr,n,key);
cout<<"Result: "<<result;
}