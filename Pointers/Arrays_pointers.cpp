#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int *p;
    // pointer used to point to the first element of the array.
    p=&arr[0];
    // will return the address of the first element of the array.
    cout<<p<<endl;
    // will print the value at the first index of the array.
    cout<<*p<<endl;

    // another way to the adress the value and address of the first element of the array.

    cout<<*arr<<endl;




    // way to print the whole array

/*
    for(int i=0;i<n;i++)
    {
        // this will print the address of all the elements of the array.
        cout<<(arr+i)<<endl;
    }
*/

    /*
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    */

   // pointers in character arrays

   char ch[6]="abcde";
   /*
   character arrays behave differently compared to the normal arrays.
   */
   cout<<ch<<endl;

   // acessing character arrays through pointers.

   char *c=&ch[0];

// will print the whole string.
   cout<<c<<endl;
   // will print the partcular character stored at that value.
   cout<<*(c+1)<<endl; //b

}