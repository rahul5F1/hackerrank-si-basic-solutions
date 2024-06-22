/*
Given a string, toggle the case of each character in the given string.

Input Format:
Input contains a string S, consisting of lowercase and uppercase characters.

Constraints:
1 <= len(S) <= 100

Output Format:
Print the toggled string.

Sample Input:
abdBd

Sample Output:
ABDbD
*/

//Solution - 1
#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin>>str;
    for(char ch:str){
        if(ch>='a' && ch<='z')
            cout<<(char)(ch-32);                                      //if lower case we convert it into upper case
        else
            cout<<(char)(ch+32);                                      //if upper case we convert it into lower case
    }                                                                 //Space Complexity: O(1)                     //Time Complexity: O(n)
    return 0;
}

//Solution - 2 (Bit Manipulation approach)
#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin>>str;
    for(char ch:str)                                                 
        cout<<(char)(ch^32);                                          //doing xor i.e., if upper then becomes lower or if lower then becomes upper                               
    return 0;                                                         //Space Complexity: O(1)                       //Time Complexity: O(n)
}
