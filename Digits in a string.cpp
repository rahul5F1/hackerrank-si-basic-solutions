/*
Given a string, check if it contains only digits.

Input Format:
Input contains a string S, consisting of ascii characters.

Constraints:
1 <= len(S) <= 100

Output Format:
Print "Yes" if string contains only digits, "No" otherwise.

Sample Input"
123456786543

Sample Output: 
Yes

Sample Input:
Smart-Interviews

Sample Output:
No
*/

//Program
#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin>>str;
    int cnt=0;
    for(auto ch:str){
        if(isdigit(ch))
            cnt++;
    }
    if(cnt==(int)str.length())
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}

//Space Cmplexity: O(1)
//Time Complexity: O(n)
