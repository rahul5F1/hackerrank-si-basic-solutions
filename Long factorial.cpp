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
    cin>>n;                                     //taking the input
    long long f=1;                              //initially f value will be 1
    for(int i=1;i<=n;i++)                       //iterating from 1 to n
        f*=i;                                   //multiplying f one by one from 1 to n
    cout<<f;                                    //printing the answer
    return 0;                               
}                                               //Space Complexity: O(1)          //Time Complexity: O(n)


//Recursive approach
#include<bits/stdc++.h>
using namespace std;
long long fact(int n){
    if(n<=1) return n;                           //returns the factorial of n
    return n*fact(n-1);                         //recursive call to multipy if still there are numbers to multiply
}
int main() {
    int n;
    cin>>n;                                      //taking the input
    cout<<fact(n);                               //calling the fact() function then printing the answer
    return 0;                              
}                                               //Space Complexity: O(n) (Auxiliary Space)         //Time Complexity: O(n)


//Dynamic Programming approach
#include<bits/stdc++.h>
using namespace std;
long long fact(int n) {
    vector<long long> dp(n+1, 1);               //declare and initialize DP table with 1's
    for (int i=2;i<=n;i++)                      //iterates from 2 to n
        dp[i]=dp[i-1] * i;                      //use previous factorial result to calculate
    return dp[n];                               //returns the factorial of n
}
int main() {
    int n;
    cin>>n;                                     //taking the input
    cout <<fact(n);                            //calling te fact() function
    return 0;                               
}                                              //Space Complexity: O(n)        //Time Complexity: Amortized O(n)


//Backtracking approach
#include<bits/stdc++.h>
using namespace std;
long long fact(int n,long long result) {
    if(n == 0 || n == 1)
        return result;                          //returns the factorial of n
    return fact(n-1,result * n);                //recursive call to multipy if still there are numbers to multiply
}

int main() {
    int n;
    cin>>n;                                     //taking the input
    cout<<fact(n,1);                           //calling the fact() function with inital result value as 1
    return 0;                                
}                                             //Space Complexity: O(n)  (Auxiliary space)          //Time Complexity: O(n)
