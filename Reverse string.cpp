/*
Given a string, reverse the given string in-place and then print it.
Note: Do not use any inbuilt functions/libraries for your main logic.

Input Format:
Input contains a string S, consisting of ascii characters.

Constraints:
1 <= len(s) <= 100

Output Format:
Print the reversed string.

Sample Input:
fdsrd

Sample Output:
drsdf
*/

//Bruteforce approach
#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin>>str;
    int n=str.size();
    for(int i=n-1;i>=0;i--)                                 // Space Complexity: O(1)
        cout<<str[i];                                       // Time Complexity: O(n)
    return 0;
}

//Optimal approach
#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin>>str;
    int n=str.size();
    for(int i=0;i<n/2;i++)
        swap(str[i],str[n-i-1]);                            // Space Complexity: O(1)
    cout<<str;                                              // TIme Complexity: O(n/2) ~ O(n)
    return 0;
}
