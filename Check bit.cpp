/*
In a given integer N, check whether the ith bit is set or not.

Input Format:
First and only line of input contains N and i.

Constraints:
0 <= N <= 109
0 <= i <= 30

Output Format:
Print "true" if ith bit is set in the given integer N, "false" otherwise.

Sample Input:
10 1

Sample Output:
true
*/

//Program
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i;
    cin>>n>>i;                                  //taking n and i inputs 
    if(((n>>i)&1)==1)                          //doing & with 1 and ith bit of n from left 
        cout<<"true";                          //executes if ith bit is set
    else 
        cout<<"false";                        //executes if ith bit is not set
    return 0;
}

//Space Complexity: O(1)
//Time Complexity: O(1)
