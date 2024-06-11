/*
Given an integer N, check whether it is a Narcissistic number or not.
Note: A narcissistic number is a number that is the sum of its own digits each raised to the power of the number of digits

Input Format:
First and only line of input contains a integer - N.

Constraints:
0 <= N <= 109

Output Format:
Print "Yes" if the number is Narcissistic number, "No" otherwise.

Sample Input:
8208

Sample Output:
Yes

Explanation:
84 + 24 + 04 + 84 = 8208
*/

//Program
#include<bits/stdc++.h>
using namespace std;
bool checkNarcissistic(int n){
    int sum=0,temp=n;
    int cnt=(int)(log10(n)+1);
    while(n>0){
        int d=n%10;
        sum+=pow(d,cnt);
        n/=10;
    }
    return (temp==sum);
}
int main() {
    int n;
    cin>>n;
    if(checkNarcissistic(n))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}

//Space Complexity: O(1)
//Time Complexity: O(log n)
