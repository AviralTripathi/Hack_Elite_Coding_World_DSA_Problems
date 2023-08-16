#include<bits/stdc++.h>
using namespace std;

string  reverse(string s)
{
    int start=0;
    int end=s.length()-1;
    while(start<=end){
        swap(s[start],s[end]);
        start++;
        end--;

    }
    return s;
}
string removeAdjacentDuplicates(string s)
{
    string result;
    stack<char>st;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(!(st.empty()) && st.top()==s[i])
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    int i=0;
    while(!st.empty())
    {
        result+=st.top();
        st.pop();
        i++;
    }
    return reverse(result);

}
int main()
{
string s="azxxzy";
string w=removeAdjacentDuplicates(s);
cout<<"New String: "<<w;
}