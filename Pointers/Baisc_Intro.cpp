#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num=5;
    int *p=&num;
    cout<<num++<<endl;

    // to find the address of the variable num where it is stored in the memory 
    // use & operator which gives the address in hexadecimal format.

    cout<<*p<<endl;

    // '*' is a dereference operator.

    // to calculate the size of pointer.
    cout<<"Size of integer: "<<sizeof(num)<<endl;

    cout<<"Size of pointer: "<<sizeof(p)<<endl;
    /*size of pointer will any how irrespective of the data type will have 
    8 since it stores the address of the variable.
    */

    // acessing array using pointers.

    cout<<(*p)++<<endl;
    cout<<*p<<endl;

    int a=*p;
    cout<<num<<endl;
    cout<<++a<<endl;
    // the result of updation of a doesn't have a effect on num since 
    // we have created a copy of pointer variable.
    // remember we have created a copy of the pointer variable
    // not the pointer.

    cout<<num<<endl;


    // method to create the copy of the pointer.

    int *q=p;
    
    cout<<p<<endl;
    cout<<q<<endl;
    cout<<*p<<endl;
    cout<<*q<<endl;

    // important concept

    int i=4;
    int *t=&i;
    cout<<(*t++)<<endl;

    cout<<t<<endl;
 
    t=t+1; // t pointer will move to next integer or any other data type value.
    // since a particular integer takes 4 bytes.
    cout<<t<<endl;





}