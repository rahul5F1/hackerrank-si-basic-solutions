/*
Given an integer N, check whether it's an Armstrong number or not.
Note: An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

Input Format:
First and only line of input contains a integer - N.

Constraints:
0 <= N <= 109

Output Format:
Print "Yes" if the number is an Armstrong number, "No" otherwise.

Sample Input:
153

Sample Output:
Yes
*/

//Program
#include<bits/stdc++.h>
using namespace std;
bool checkArmstrong(int n){
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
    if(checkArmstrong(n))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}

//Space Complexity: O(1)
//Time Complexity: O(log n)
