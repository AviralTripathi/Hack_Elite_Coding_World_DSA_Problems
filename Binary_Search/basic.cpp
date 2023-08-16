// to demonstrate binary search

#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int target)
{
int start=0;int end=n-1;
// to take into consideration that start and end and eventually mid should not overflow beyond the range of int.
int mid=start+(end-start)/2;
while(start<=end)
{
    if(arr[mid]==target)
    {
        return target;
    }
    if(arr[mid]>target)
    {
        end=mid-1;
    }
    else{
        start=mid+1;
    }
    mid=start+(end-start)/2;
}
return -1;
}
int main()
{
    int arr[]={20,30,45,67,98,114,120,277};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=72;
    int result=binary_search(arr,n,target);
    cout<<result;

}
