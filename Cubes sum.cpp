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
    cin>>n;                                                          //taking the input
    int sum=0;                                                      //intially sum will be 0
    for(int i=1;i<=n;i++)                                           //iterating from 1 to n
        sum+=(i*i*i);                                               //multiplying each number themselves three times then adding to the sum
    cout<<sum;                                                      //printing the sum
    return 0;                                                    
}                                                                   // Space Complexity: O(1)          // Time Complexity: O(n)

//Optimal approach
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;                                                       //taking the input
    int ans=(n*(n+1))/2;                                          //since it is the formula for finding sum of first natural numbers
    int sum=ans*ans;                                             //by sqaring the above formula we get the formula for sum of cubes of first n natural numbers
    cout<<sum;                                                   //printing the sum
    return 0;
}                                                                // Space Complexity: O(1)           // Time Complexity: O(1)
