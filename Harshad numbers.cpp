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
    cin>>n;                                                  //taking the input
    int sum=0,temp=n;                                        //initially sum will be 0 and temp stores n because of the operations we will do on n value gets change
    while(temp>0){                                           //executes untill there will be no digits in n
        int d=temp%10;                                       //extracting the last digit of n
        sum+=d;                                              //adding the extracted digit to sum
        temp/=10;                                            //removing last digit of n
    }
    if((n % sum)==0)
        cout<<"Yes";                                        //executes if the sum is divisible by n
    else
        cout<<"No";                                         //executes if the sum is not divisible by n
    return 0;
}

//Space Complexity: O(1)
//Time Complexity: O(log n)
