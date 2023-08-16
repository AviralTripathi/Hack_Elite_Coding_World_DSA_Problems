#include<bits/stdc++.h>
using namespace std;

void generateSubsequences(string &word,int start,int l,string temp,vector<string> &answer)
{
    if(start==l)
    {
    answer.push_back(temp);
    return;
    }
    // for pushing a particular letter in the temporary string.
    temp.push_back(word[start]);

    // recurisve call for picking a particular element

    generateSubsequences(word,start+1,l,temp,answer);
    // to remove the last added character.
    temp.pop_back();

    generateSubsequences(word,start+1,l,temp,answer);


    

}

vector<string> subsequences(string &word)
{
vector<string> answer;
string temp="";
int len=word.length();
int start=0;
generateSubsequences(word,start,len,temp,answer);
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
string word="abc";
vector<string> answer;
answer=subsequences(word);
printVector(answer);
}