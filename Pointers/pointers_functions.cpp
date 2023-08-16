#include<bits/stdc++.h>
using namespace std;

// update the value of a variable using pointer.

/*
void update(int *p)
{
++(*p);

}

*/

void update_array(int *p)
{
    ++(*p);
}

// function/method to print the array elements using pointers.

void print_array(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<*(arr+i)<<endl;
    }
}

int  main()
{
    /*
    int a=5;
    int *p=&a;
    cout<<*p<<endl;
    update(p);
    cout<<*p;
    */

   int arr[]={23,34,45,56,78};
   int *p=&arr[0];
   cout<<*p<<endl;
   // will update the array element stored at the index 1.
   update_array((p+1));
   cout<<*(p+1)<<endl;

   print_array(arr,5);

   // benefit of using  pointers.

   print_array(arr+3,2);
    
}