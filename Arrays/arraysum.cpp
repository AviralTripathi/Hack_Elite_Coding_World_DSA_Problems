#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr)
{
    int i=0;
    int j=arr.size()-1;
    while(i<j)
    {
        swap(arr[i++],arr[j--]);
    }
}

vector<int> findArraySum(vector<int> &arr1,vector<int> &arr2,int m,int n)
{
    int i=m-1;
    int j=n-1;
    vector<int> answer;
    int carry=0;
    while(i>=0 && j>=0)
    {
        int val1=arr1[i];
        int val2=arr2[j];
        int sum=val1+val2+carry;
        carry=sum/10;
        sum=sum%10;
        answer.push_back(sum);
        i--;
        j--;
    }

    while(i>=0)
    {
        int sum=arr1[i]+carry;
        carry=sum/10;
        sum=sum%10;
        answer.push_back(sum);
        i--;
    }

    while(j>=0)
    {
        int sum=arr2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        answer.push_back(sum);
        j--;
    }

    while(carry!=0)
    {
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        answer.push_back(sum);
    }
    reverse(answer);
    return answer;
}

void printVector(vector<int> &arr)
{
    for(auto i:arr)
    cout<<i<<" ";
}

int main()
{
    vector<int> v1={1,2,3,4};
    vector<int> v2={6};
    int m=v1.size();
    int n=v2.size();
    vector<int> answer;
    answer=findArraySum(v1,v2,m,n);
    printVector(answer);
}