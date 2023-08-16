#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
int n=nums.size();
int index=-1;
for(int i=0;i<n;i++)
{
    if(nums[i]==0)
    {
        index=i;
        break;
    }
}
for(int j=index+1;j<n;j++)
{
    if(nums[j]!=0)
    {
        swap(nums[index],nums[j]);
        index++;
    }
}
}

void printVector(vector<int> &nums)
{
    for(auto i:nums)
    cout<<i<<endl;
}

int main()
{
    vector<int> nums={0,1,0,3,12,0};
    moveZeroes(nums);
    printVector(nums);
}