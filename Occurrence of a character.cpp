/*
Given a sentence S and a character ch, count occurrence of the given character in the sentence

Input Format:
First line of input contains a sentence - S and second line of input contains a single lowercase character - ch.

Constraints:
1 <= len(S) <= 100

Output Format:
Print count of the given character in the sentence.

Sample Input:
Data Structures & Algorithms
s

Sample Output:
2
*/

//Using map
#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    getline(cin,str);
    char ch;
    cin>>ch;
    map<char,int> mp;
    for(auto c:str)
        mp[c]++;                                           //storing thr characters with their frequency in map
     cout<<mp[ch];
    return 0;                                              //Space Complexity: O(n)      //Time Complexity: O(n)
}

//Using count array
#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    getline(cin,str);
    char ch;
    cin>>ch;
    int a[256]={0};
    for(auto c:str){
        int ind=c-'a';                                     //finding the index of particular character to implrement count array
        a[ind]++;                                          //storing thr characters with their frequency in count array
    }
     cout<<a[(int)ch-'a'];                                 //printing the frequency of character by accessing its index in count array
    return 0;                                               //Space Complexity: O(256) ~ O(1)               //Time Complexity: O(n)
}

//without using extra space
#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    getline(cin,str);
    char ch;
    cin>>ch;
    int cnt=0;
    for(auto c:str){
        if(c==ch)
            cnt++;                                          //incrementing the cnt if string contains required character iteratively by traversing he string
    }
    cout<<cnt;                                             
    return 0;                                               //Space Complexity: O(1)                         //Time Complexity: O(n)
}
