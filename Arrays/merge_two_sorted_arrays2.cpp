#include<bits/stdc++.h>
using namespace std;


vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     //to trim the arr1 vector.
  for (int i = n + 1; i < m; i++) {
  nums1.pop_back();
  }
  // now arr1[]={3,6,9} & arr2[]={4,10};

  // now merge the two sorted arrays
  int i=0,j=0;int temp=0;
  int p=nums1.size();
vector<int> nums3(n+m);
  while (i <m && j < n) {
  if (nums1[i] < nums2[j]) {
    nums3[temp]=nums1[i];
    i++;
    temp++;
  } 
  else
  {
    nums3[temp]=nums2[j];
    temp++; j++;
  }
  }
  while(i<m)
  {
    nums3[temp]=nums1[i];
    i++;
    temp++;
  }
  while (j < n) {
    nums3[temp]=nums2[j];
    j++; temp++;
  }
  nums1=nums3;
  return nums1;   
    }

    int main()
    {
        vector<int> nums1={1,4,6,10,0,0};
        int m=nums1.size();
        vector<int> nums2={2,5};
        int n=nums2.size();
        vector<int> answer;
        answer=merge(nums1,m-n,nums2,n);
        for(auto i:nums1)
        cout<<i<<" ";
    }