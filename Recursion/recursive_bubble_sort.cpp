#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n,int i,int j)
 {
    if(i>=n)
    return;
    else if(j>=(n-i))
        bubbleSort(arr,n,i+1,0);
        
    else{
        
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            bubbleSort(arr,n,i,j+1);
        }
    }

int main()
{
    int arr[]={40,30,120,90,10,50,70,23,223};
    int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=1;i<n;i++)
    // {
    //     for(int j=0;j<n-i;j++)
    //     {
    //         if(arr[j]>arr[j+1])
    //         {
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }
    bubbleSort(arr,n,1,0);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}