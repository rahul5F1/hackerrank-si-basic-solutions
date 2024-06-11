/*
Given a positive integer N, print the sum of cubes of 1st N natural numbers.

Input Format:
First and only line of input contains a positive integer - N.

Constraints:
1 <= N <= 102

Output Format:
Print the sum of cubes of 1st N natural numbers.

Sample Input:
4

Sample Output:
100
*/

//Bruteforce approach
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
        sum+=(i*i*i);
    cout<<sum;                                                  // Space Complexity: O(1)
    return 0;                                                   // Time Complexity: O(n)
}

//Optimal approach
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int ans=(n*(n+1))/2;
    int sum=ans*ans;                                       //formula for sum of cubes of first N natural numbers
    cout<<sum;                                                  // Space Complexity: O(1)
    return 0;                                                   // Time Complexity: O(1)
}
