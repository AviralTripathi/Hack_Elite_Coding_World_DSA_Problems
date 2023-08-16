/*
lower bound of a function gives the smallest or the first index such that arr[x]>=key.
for example:
Example 1:
Input Format: N = 4, arr[] = {1,2,2,3}, x = 2
Result: 1
Explanation: Index 1 is the smallest index such that arr[1] >= x.

Example 2:
Input Format: N = 5, arr[] = {3,5,8,15,19}, x = 9
Result: 3
Explanation: Index 3 is the smallest index such that arr[3] >= x.
*/

#include<bits/stdc++.h>
using namespace std;
bool isPresent(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        return 1;
    }
    return 0;
}
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
        return ans;
    }
    else if(arr[mid]>key)
    {
        ans=mid;
        end=mid-1;
    }
    else{
        start=mid+1;
    }
    mid=start+(end-start)/2;
}
return ans;
}



int lower_bound(int arr[],int n,int key)
{
    return first_occurence(arr,n,key);

}
int main()
{
    int arr[]={1,2,2,3};
    int key=2;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=lower_bound(arr,n,key);
    cout<<"Result: "<<result;


}