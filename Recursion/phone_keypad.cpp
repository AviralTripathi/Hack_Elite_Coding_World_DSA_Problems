#include <bits/stdc++.h>
using namespace std;

/*
Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

Example 1:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
Example 2:

Input: digits = ""
Output: []
Example 3:

Input: digits = "2"
Output: ["a","b","c"]
*/

void getCombinations(string &digits, int start, string &temp, vector<string> &answer, string mapping[])
{
    if(start==digits.length())
    {
        answer.push_back(temp);
        return;
    }
    int number=digits[start]-'0';
    string value=mapping[number];
    for(int i=0;i<value.length();i++)
    {
        temp.push_back(value[i]);
        // recurisve call for picking the element.
        getCombinations(digits,start+1,temp,answer,mapping);

        // backtrack component.

        temp.pop_back();
        /*
        recursive call similar to subsequences question
        is not required here since that particular
        recursive call  will move the start pointer
        to the next index of the digits string.
        for example in case of 23 it will move from 
        2 to 3 which will give wrong result.
        */
        
    }
}

vector<string> letterCombinations(string digits)
{
    vector<string> answer;
    if(digits.length()==0)
    return answer;
    string temp;
    int start = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    getCombinations(digits, start, temp, answer, mapping);
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
    string digits = "2";
    vector<string> answer;
    answer = letterCombinations(digits);
    printVector(answer);
}