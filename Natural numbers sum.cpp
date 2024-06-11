/*
Given a positive integer N, print the sum of 1st N natural numbers.

Input Format:
First and only line of input contains a positive integer - N.

Constraints:
1 <= N <= 104

Output Format:
Print the sum of 1st N natural numbers.

Sample Input:
4

Sample Output:
10
*/

//Bruteforce approach
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
        sum+=i;
    cout<<sum;                                       //Space Complexity: O(1)
    return 0;                                        //Time Complexity: O(n)
}

//Optimal solution
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum=(n*(n+1))/2;               // formula for sum of first N natural numbers
    cout<<sum;                                      //Space Complexity: O(1)
    return 0;                                       //Time Complexity: O(1)
}
