/*
Given an integer N, check whether it is a Harshad number or not.
Note: A Harshad number is an integer, that is divisible by the sum of its digits.

Input Format:
First and only line of input contains a integer - N.

Constraints:
1 <= N <= 109

Output Format:
Print "Yes" if the number is a Harshad number, "No" otherwise.

Sample Input:
18

Sample Output:
Yes

Explanation:
18 / (1 + 8) = 2
As 18 is divisible by the sum of its digits, it is a Harshad number.
*/

//Program
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum=0,temp=n;
    while(temp>0){
        int d=temp%10;
        sum+=d;
        temp/=10;
    }
    if(n%sum==0)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}

//Space Complexity: O(1)
//Time Complexity: O(log n)
