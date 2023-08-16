/*
Problem Statement: Given an array of N integers. 
Every number in the array except one appears twice. 
Find the single number in the array.

Example 1:
Input Format: arr[] = {1,1,2,2,3,3,4,5,5,6,6}
Result: 4
Explanation: Only the number 4 appears once in the array.

Example 2:

Input Format: arr[] = {1,1,3,5,5}
Result: 3
Explanation: Only the number 3 appears once in the array.

*/

#include<bits/stdc++.h>
using namespace std;

int search_single_element(int arr[],int n)
{
    // to handle the test cases separately.
    if(n==1)
    return arr[n-1];
    else if(arr[0]!=arr[1])
    return arr[0];
    else if(arr[n-1]!=arr[n-2])
    return arr[n-1];
    // placed pointers at these indices because we have handled the edge cases.
    int start=1;int end=n-2;
    int mid=start+(end-start)/2;
    // checking for arr[mid] being the single element.
    while(start<=end)
    {
    if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1])
    return arr[mid];
    // checking for left half.
    // this is used of basically eliminating the particular half.
    else if((mid%2==0 && arr[mid]==arr[mid+1])||(mid%2==1 && arr[mid]==arr[mid-1]))
    start=mid+1;
    // checking for right half.
    else
    end=mid-1;
    mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    int arr[]={1,1,3,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=search_single_element(arr,n);
    cout<<"Result: "<<result;

}