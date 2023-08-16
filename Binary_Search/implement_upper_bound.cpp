/*
Problem Statement: Given a sorted array of N integers and an integer x, 
write a program to find the upper bound of x.

Example 1:
Input Format: N = 4, arr[] = {1,2,2,3}, x = 2
Result: 3
Explanation: Index 3 is the smallest index such that arr[3] > x.

Example 2:
Input Format: N = 6, arr[] = {3,5,8,9,15,19}, x = 9
Result: 4
Explanation: Index 4 is the smallest index such that arr[4] > x.

The solution to the problem clearly uses the concept of finding 
the last occurence of a particular key element and 
then returning the index higher i.e of the next value.

*/

#include<bits/stdc++.h>
using namespace std;
int implement_upper_bound(int arr[],int n,int key)
{
int start=0;int end=n-1; int ans=-1;
// to take into consideration that start and end and eventually mid should not overflow beyond the range of int.
int mid=start+(end-start)/2;
while(start<=end)
{
    if(arr[mid]==key)
    {
        ans=mid;
        start=mid+1;
    }
    if(arr[mid]>key)
    {
        end=mid-1;
    }
    else{
        start=mid+1;
    }
    mid=start+(end-start)/2;
}
return ans+1;

}

int main()
{
    int arr[]={3,5,8,9,15,19};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=9;
    int result=implement_upper_bound(arr,n,key);
    cout<<"Result: "<<result;

}