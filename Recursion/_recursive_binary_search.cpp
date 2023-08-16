#include<bits/stdc++.h>
using namespace std;

// recursive binary search function

bool binary_search(int arr[],int n,int start,int end,int key)
{
    int mid=start+(end-start)/2;
    if(arr[mid]==key)
    return 1;
    else if(arr[mid]>key)
        return binary_search(arr,n/2,start,mid-1,key);
    else
    return binary_search(arr,n/2,mid+1,end,key);
}

int main()
{
    int arr[]={24,40,60,80,100,120,140,160,180,200};
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=n-1;
    int key=120;
    bool result=binary_search(arr,n,start,end,key);
    cout<<"Value is present or not: "<<result;

}