#include<bits/stdc++.h>
using namespace std;

void recurPermutations(string &s,int start,string &temp,vector<string> &answer,int frequency[])
{
    if(temp.length()==s.length())
    {
        answer.push_back(temp);
        return;
    }
    for(int i=0;i<s.length();i++)
    {
        if(!frequency[i])
        {
        temp.push_back(s[i]);
        // to show that particular character has been taken into account.
        frequency[i]=1;
        recurPermutations(s,start+1,temp,answer,frequency);
        // to indicate that particular character has been removed.
        frequency[i]=0;
        temp.pop_back();
        }

    }
}

vector<string> generatePermutations(string &str)
{
    int start=0;
    string temp="";
    vector<string> answer;
    int frequency[str.length()]={0};
    recurPermutations(str,start,temp,answer,frequency);
    sort(answer.begin(),answer.end());
    return answer; 

}


void printVector(vector<string> &answer)
{
    vector<string>::iterator itr;
    for(itr=answer.begin();itr!=answer.end();itr++)
    {
        cout<<"["<<*itr<<"]"<<endl;
    }
}


int main()
{
    string s="123";
    vector<string> answer;
    answer=generatePermutations(s);
    printVector(answer);
}