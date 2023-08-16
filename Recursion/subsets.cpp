#include<bits/stdc++.h>
using namespace std;

void getSubsets(vector<int> &v,int start,vector<int> &temp,vector<vector<int>> &answer)

{
if(start>=v.size())
{
answer.push_back(temp);
return;
}
temp.push_back(v[start]);
// recursive call for picking the element
getSubsets(v,start+1,temp,answer);
/*
this recursive call will execute on backtracking
that is when return statement is encountered.
*/
temp.pop_back();

// condition for not picking the element.

getSubsets(v,start+1,temp,answer);

}

vector<vector<int>> subsets(vector<int> &v)
{
vector<vector<int>> answer;
vector<int> temp;
int start=0;
getSubsets(v,start,temp,answer);
return answer;
}

void printVector(vector<vector<int>> v,int n)
{
        for (int i = 0; i < n; i++) {
        for (
            auto it = v[i].begin();
            it != v[i].end(); it++)
            cout << *it << " ";
        cout << endl;
    }

}
int main()
{
    vector<int> v={1,2,3};
    vector<vector<int>> answer;
    answer=subsets(v);
    printVector(answer,answer.size());


}