/*
Given a string, check if it contains all the letters of the english alphabet.

Input Format:
Input contains a string S, consisting of lowercase and uppercase characters.

Constraints:
1 <= len(S) <= 100

Output Format:
Print "Yes" if string contains all the letters of alphabet, "No" Otherwise.

Sample Input:
askhTwsFlkqwertyuioPasdfghjklZxcvBnm

Sample Output:
Yes
*/

//Using set
#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin>>str;                                                                //taking the input string
    transform(str.begin(),str.end(),str.begin(),::tolower);                  //transforming all upper case letters into lower case in the string
    set<char> s;                                                             //declaring a set data structure in order to store unqique characters of string
    for(auto ch:str)                                                        //implementing for each loop
        s.insert(ch);                                                      //stores the characters of string and avoids storing the duplicate characters in to set
    if(s.size()==26)
        cout<<"Yes";                                                       //executes if set has 26 elements
    else                                                          
        cout<<"No";                                                       //executes if set does not have 26 elements 
    return 0;
}                                                                         // Space Complexity: O(n)        // Time Complexity: O(n) 


//Using count array
#include<bits/stdc++.h>
using namespace std;
bool checkPangram(string str){
    transform(str.begin(),str.end(),str.begin(),::tolower);               //transforming all upper case letters into lower case in the string
    int a[26]={0};                                                        //declaring a count array of size 26 that represent 26 alphabets
    for(auto ch:str){                                                     //implementing for each loop
        int ind=ch-'a';
        a[ind]++;                                                         //increments the count of respective character in count array for each character of string
    }
    for(int i=0;i<26;i++){                                                //trvaersing the count array
        if(a[i]==0)
            return false;                                                 //returning false if we find any character's count is 0
    }
    return true;                                                          //returning true if we dont find any character with the count 0
}
int main() {
    string str;
    cin>>str;                                                             //taking the input string
    if(checkPangram(str))                                                 //calling the checkPangram function
        cout<<"Yes";                                                      //executes if checkPangram() function returns true
    else                                                       
        cout<<"No";                                                       //executes if checkPangram() function returns false
    return 0;
}                                                                        //Space Complexity: O(26) ~ O(1)           //Time Complexity: O(n+26) ~ O(n)
