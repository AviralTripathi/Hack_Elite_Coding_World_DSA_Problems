/*
code to print the first and last position of a particular number in an array 
and eventually the number of occurences of a number in an array.
*/

#include<bits/stdc++.h>
using namespace std;
int first_occurence(int arr[],int n,int key)
{
int start=0;int end=n-1; int ans=-1;
// to take into consideration that start and end and eventually mid should not overflow beyond the range of int.
int mid=start+(end-start)/2;
while(start<=end)
{
    if(arr[mid]==key)
    {
        ans=mid;
        end=mid-1;
    }
    else if(arr[mid]>key)
    {
        end=mid-1;
    }
    else{
        start=mid+1;
    }
    mid=start+(end-start)/2;
}
return ans;
}
int last_occurence(int arr[],int n,int key)
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
return ans;

}

int main()
{
    int arr[]={1,2,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=3;
    int first=first_occurence(arr,n,key);
    int last=last_occurence(arr,n,key);
    cout<<"first occurence of key at index: "<<first<<endl;
    cout<<"last occurence of key at index: "<<last<<endl;
    cout<<"total number of occurences: "<<((last-first)+1)<<endl;
}
