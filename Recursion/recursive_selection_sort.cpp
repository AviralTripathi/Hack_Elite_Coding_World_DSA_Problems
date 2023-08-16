#include<bits/stdc++.h>
using namespace std;


// to get the second loop task done using getMinIndex function.

int getMinIndex(int *arr,int second,int len)
{
    int min;
    if(second==len){
    return second;
    }
    min=getMinIndex(arr,second+1,len);
    if(arr[second]<arr[min]){
    min=second;
    }
    return min;

}
// recursive function for selection sort.
// 
void selectionSort(int *arr,int first,int n)
{
    int minIndex;
    if(first==n)
    return;
    
    minIndex=getMinIndex(arr,first,n-1);
    if(first!=minIndex)
    swap(arr[first],arr[minIndex]);
    selectionSort(arr,first+1,n); 
}



// iterative selection sort function.

// selection sort is whole about selecting minimum & swapping.

// void selectionSort(int *arr,int n)
// {
//     for(int i=0;i<n-1;i++)
//     {
//         int minIndex=i;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[j]<arr[minIndex])
//             {
//                 minIndex=j;
//             }
//         }
//         swap(arr[i],arr[minIndex]);
//     }
// }

// recursive function for printing the array.

void printArray(int *arr,int start,int n)
{
    if(start>=n)
    return;
    else
    {
        cout<<*(arr+start)<<" ";
        printArray(arr,start+1,n);
    }
}



int main()
{
    int arr[]={23,49,67,56,12,1,4,2,21,17,81,100,97};
    int n=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,0,n);
    // cout<<endl;
    selectionSort(arr,0,n);
    // cout<<"Sorted Array using recursive Selection sort: "<<endl;
//    for (int i = 0; i<n ; i++){
//       cout << arr[i] << " ";
//    }
    printArray(arr,0,n);
}