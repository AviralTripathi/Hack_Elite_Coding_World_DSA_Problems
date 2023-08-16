#include<bits/stdc++.h>
using namespace std;

bool linear_search(int arr[],int n,int start,int key)
{
    // base case
    if(start==n)
    return false;
    else if(arr[start]==key)
    return true;
    else
    {
        start=start+1;
        return linear_search(arr,n,start,key);
    }
}

int main()
{
    int arr[]={24,40,60,80,100,120,140,160,180,200};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=220;
    int start=0;
    bool result=linear_search(arr,n,start,key);
    cout<<"Value is present or not: "<<result;

}