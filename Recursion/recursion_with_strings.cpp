#include<bits/stdc++.h>
using namespace std;

// remember always to take the the string as 
// formal parameter in the function signature 
// always pointer like.


bool checkPalindrome(string &s,int start,int end)
{
if(start>=end)
return true;
    else if(s[start]==s[end])
    {
    start++; end--;
    return checkPalindrome(s,start,end);
    }
   else{
    return false;
    }
}


void reverse(string &s,int start,int end)
{
if(start>=end)
return;
else
{
swap(s[start],s[end]);
start++;
end--;
reverse(s,start,end);
}
}


int main()
{
    string s="madam1";
    int l=s.length();
    cout<<"Original string: "<<s<<endl;

    bool result=checkPalindrome(s,0,l-1);
    cout<<"is palindrome or not: "<<result<<endl;


    reverse(s,0,l-1);

    cout<<"reverse of a string: "<<s<<endl;
}
