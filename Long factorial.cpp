/*
Given a non-negative number - N, print N!

Input Format:
First and only line of input contains a number - N.

Constraints:
0 <= N <= 20

Output Format:
Print factorial of N.

Sample Input:
3

Sample Output:
6
*/

//Iterative approach
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long f=1;
    for(int i=1;i<=n;i++)
        f*=i;
    cout<<f;                                //Space Complexity: O(1)
    return 0;                               //Time Complexity: O(n)
}


//Recursive approach
#include<bits/stdc++.h>
using namespace std;
long long fact(int n){
    if(n<=1) return n;
    return n*fact(n-1);
}
int main() {
    int n;
    cin>>n;
    cout<<fact(n);                         //Space Complexity: O(n) (Auxiliary Space)
    return 0;                              //Time Complexity: O(n)
}


//Dynamic Programming approach
#include<bits/stdc++.h>
using namespace std;
long long fact(int n) {
    vector<long long> dp(n+1, 1);            // Initialize DP table with 1's
    for (int i=2;i<=n;i++)
        dp[i]=dp[i-1] * i;                   // Use previous factorial result to calculate the current one
    return dp[n];                            // Return the factorial of n
}
int main() {
    int n;
    cin>>n;
    cout <<fact(n);                          //Space Complexity: O(n)
    return 0;                               //Time Complexity: Amortized O(n)
}


//Backtracking approach
#include<bits/stdc++.h>
using namespace std;
long long fact(int n,long long result) {
    if(n == 0 || n == 1)
        return result;
    return fact(n-1,result * n);
}

int main() {
    int n;
    cin>>n;
    cout<<fact(n,1);                         //Space Complexity: O(n)  (Auxiliary space)
    return 0;                                //Time Complexity: O(n)
}
