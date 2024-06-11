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
        mp[c]++;
     cout<<mp[ch];                                         //Space Complexity: O(n)
    return 0;                                              //Time Complexity: O(n)
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
        int ind=c-'a';
        a[ind]++;
    }
     cout<<a[(int)ch-'a'];                                  //Space Complexity: O(256) ~ O(1)
    return 0;                                               //Time Complexity: O(n)
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
            cnt++;
    }
    cout<<cnt;                                             //Space Complexity: O(1)
    return 0;                                              //Time Complexity: O(n)
}
