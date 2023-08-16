/*
Code the find the number of times the array has been rotated.
Example 1:
Input Format: arr = [4,5,6,7,0,1,2,3]
Result: 4
Explanation: The original array should be [0,1,2,3,4,5,6,7]. So, we can notice that the array has 
been rotated 4 times.

Example 2:
Input Format: arr = [3,4,5,1,2]
Result: 3
Explanation: The original array should be [1,2,3,4,5]. So, we can notice that the array has been rotated 3 times.
Observation: Solving this problem is similar to finding the minimum element(pivot if u choose so) since
the number of times the array has been rotated is equal to the index of the 
minimum element in the array.

*/

#include<bits/stdc++.h>
using namespace std;
int findNumberOfRotations(int arr[],int n)
{
    int start=0;int end=n-1;
    int mid=start+(end-start)/2;
    while(start<end)
    {
        if(arr[mid]>arr[0])
        start=mid+1;
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;

}
int main(){
int arr[]={4,5,6,7,0,1,2,3};
int n=sizeof(arr)/sizeof(arr[0]);
int result=findNumberOfRotations(arr,n);
cout<<"Number of times the array has been rotated: "<<result;
}