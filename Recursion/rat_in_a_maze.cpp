#include<bits/stdc++.h>
using namespace std;

void findPathGuide(int i,int j,int n,vector<vector<int>> &m,string move,vector<string> &answer,vector<vector<int>> &visited)
{
// base case
if(i==n-1 && j==n-1)
{
    answer.push_back(move);
    return;
}

// downward

if(i+1<n && !visited[i+1][j] && m[i+1][j]==1)
{
    visited[i][j]=1;
    findPathGuide(i+1,j,n,m,move+'D',answer,visited);
    visited[i][j]=0;
}

// left

if(j-1>=0 && !visited[i][j-1] && m[i][j-1]==1)
{
    visited[i][j]=1;
    findPathGuide(i,j-1,n,m,move+'L',answer,visited);
    visited[i][j]=0;
}

// right

if(j+1<n && !visited[i][j+1] && m[i][j+1]==1)
{
    visited[i][j]=1;
    findPathGuide(i,j+1,n,m,move+'R',answer,visited);
    visited[i][j]=0;
}

// upward

if(i-1>=0 && !visited[i-1][j] && m[i-1][j]==1)
{
    visited[i][j]=1;
    findPathGuide(i-1,j,n,m,move+'U',answer,visited);
    visited[i][j]=0;
}


}

vector <string> findPath(vector<vector<int>> &m,int n)
{
    vector<string> answer;
    vector<vector<int>> visited(n,vector<int>(n,0));
    if(m[0][0]==1)
    findPathGuide(0,0,n,m,"",answer,visited);
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
    int n=4;
    vector<vector<int>> m={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    vector<string> result=findPath(m,n);
    printVector(result);

}