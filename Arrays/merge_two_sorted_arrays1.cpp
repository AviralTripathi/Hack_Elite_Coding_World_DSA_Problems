#include<bits/stdc++.h>
using namespace std;


void printVector(vector<int> &v)
{

    for(auto i:v)
    cout<<i<<" ";
    cout<<endl;
}


void merge(vector<int> &nums1,vector<int> &nums2)
{
int m=nums1.size();
int n=nums2.size();
int i=0,j=0;
// the problem was comming  beacause of the size of the vector num3 was not defined properly.
vector<int> nums3(m+n);
int k=0;
while(i<m && j<n)
{
    if(nums1[i]<nums2[j])
    {
        nums3[k++]=nums1[i++];
    }
    else
    {
        nums3[k++]=nums2[j++];
    }
}
// to copy the elements remaining in the nums1 vector.
while(i<m)
{
    nums3[k++]=nums1[i++];
}
// to copy the elements remaining in the nums2 vector.
while(j<n)
{
    nums3[k++]=nums2[j++];
}
nums1=nums3;
printVector(nums1);
}


int main()
{
    vector<int> nums1={3,6,9,0,0};
    vector<int> nums2={4,10};
    printVector(nums1);
    merge(nums1,nums2);
    // printVector(nums1);
}