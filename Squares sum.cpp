/*
Given a positive integer N, print the sum of squares of 1st N natural numbers.

Input Format:
First and only line of input contains positive integer - N.

Constraints:
1 <= N <= 103

Output Format:
Print the sum of squares of 1st N natural numbers.

Sample Input:
15

Sample Output:
1240
*/

//Bruteforce approach
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
        sum+=(i*i);
    cout<<sum;                                            // Space Complexity: O(1)
    return 0;                                             // Time Complexity: O(n)
}

//Optimal approach
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum=(n*(n+1)*(2*n+1))/6;               // formula for sum of squares of first N natural numbers
    cout<<sum;                                            // Space Complexity: O(1)
    return 0;                                             // Time Complexity: O(1)
}
