// program to calculate the power of a number such that a number A is raised to the power B times and finally caluclate the mod.
// Resultant expression (A^B)%m

/*
fast exponentiation:
a^b=(a^(b/2))^2: if b is even.
a^b=((a^(b/2))^2)*a: if b is odd.
*/

#include<bits/stdc++.h>
using namespace std;
int modularExponentiation(int x,int n,int m)
{
    int res=1;
    // loop will run till the time the value of n is greater than>0
    while(n>0)
    {
        // checking for the power(or exponent) to be odd or even.
        if(n&1)
        {
            // storing the result in case of power being odd.
            // (1LL) is being used for typecasting since if the n being a high value eg: 10^9 then this will make it 10^18 and in turn will throw TLE error.
            res=(1LL*(res)*(x%m))%m;
        }
        // to first square the value whose power is to be raised.
        x=(1LL*(x%m)*(x%m))%m;
        // using the bitwise right shift to update the value of the control variable that is: n=n/2;
        // bitwise rightshift is for divide.   eg: a>>1(a/2)
        // bitwise leftshift is for multiply. eg: a<<1(a*2)
        n=n>>1;
    }
    return res;
}
int main()
{
int result=modularExponentiation(5,2,7);
cout<<"Required result: "<<result;
}