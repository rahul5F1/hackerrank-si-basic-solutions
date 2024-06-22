/*
Given a string, check if it contains only vowels.

Input Format:
Input contains a string S, consisting of lowercase and uppercase characters.

Constraints:
1 <= len(S) <= 100

Output Format:
Print "Yes" if string contains only vowels, "No" Otherwise.

Sample Input:
SmartInterviews

Sample Output:
No
*/

//Program
#include<bits/stdc++.h>
using namespace std;
bool checkVowels(string str){
    int cnt=0;
    for(auto ch:str){
        if(isalpha(ch) && (ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u'))
            cnt++;                                                        //incrementing cnt if the character is vowel
    }
    return (cnt==(int)str.length());                                      //returns true if vowels count equal to length of string otherwise false
}
int main() {
    string str;
    cin>>str;
    if(checkVowels(str))                                                  //calling the function
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}

//Space Complexiy: O(1)
//Time Complexity: O(n)
