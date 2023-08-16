#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size"<<endl;
    cin >>n;
    /*
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter value at index"<<(i)<<endl;
        cin >>*(arr+i);
    }
    int *p=&arr[0];
    cout<<*(p+2)<<endl;
    */

   // creating dynamic character array.

   char *ch=new char[n];
   for(int i=0;i<n;i++)
   {
    cout<<"enter the element at index"<<i<<endl;
    cin >>*(ch+i);
   }
   cout<<ch<<endl;
}