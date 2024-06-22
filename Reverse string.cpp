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
    for(int i=n-1;i>=0;i--)                                 //traversing from last to first indices of string         
        cout<<str[i];
    return 0;                                               //Space Complexity: O(1)        //Time Complexity: O(n)
}

//Using STL
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    reverse(str.begin(),str.end());                         //using reverse() function that reverses the entire string
    cout<<str;
    return 0;                                               //Space Complexity: O(1)        //Time Complexity: O(n)
}
//Optimal approach
#include<bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin>>str;
    int n=str.size();
    for(int i=0;i<n/2;i++)
        swap(str[i],str[n-i-1]);                            //swapping first and last characters by incrementing first inex and decrementing last index until we reach middle of the string
    cout<<str;                                              
    return 0;                                                //Space Complexity: O(1)          // TIme Complexity: O(n/2) ~ O(n)
}
