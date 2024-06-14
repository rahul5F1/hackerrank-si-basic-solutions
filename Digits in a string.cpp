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
    cin>>str;                                                       //taking the input string
    int cnt=0;                                                      //initially cnt will be 0
    for(auto ch:str){                                               //impementing for each loop
        if(isdigit(ch))                                             //isdigit() function is used to check if the character is digit or not
            cnt++;                                                  //cnt will get incremented if the character of string is digit
    }
    if(cnt==(int)str.length())
        cout<<"Yes";                                               //executes if cnt is equal to length of the string
    else
        cout<<"No";                                                //executes if cnt is not equal to length of the string
    return 0;
}

//Space Cmplexity: O(1)
//Time Complexity: O(n)
