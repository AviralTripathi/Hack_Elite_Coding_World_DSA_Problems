#include<bits/stdc++.h>
using namespace std;
/*
void print_counting(int n)
{
    if(n==1)
    cout<<1<<endl;
    else
    {
    cout<<n<<endl;
    print_counting(n-1);
    }

}
*/

/*
int fibonacci(int n)
{
    if(n<=1)
    return n;
    else
        in fibonacci series every number is the sum of the 
        its previous two elements;
        // return fibonacci(n-1)+fibonacci(n-2);
        
}
*/

/*
this function will return the number of disticnt ways 
to reach the nth stair if currently standing on 
0th stair.
*/
int climb_stairs(int n)
{
    if(n<0)
    return 0;
    if(n==0)
    return 1;
    else
        // since to reach the nth stair the only possible ways are through n-1 & n-2.
        return climb_stairs(n-1)+climb_stairs(n-2);

}

int main()
{
// cout<<fibonacci(4);
cout<<climb_stairs(5);
}