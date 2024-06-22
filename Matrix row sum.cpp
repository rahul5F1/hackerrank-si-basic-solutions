/*
Given a matrix of size N x M, print row-wise sum, separated by a newline.
Note: Try to solve this without declaring/storing the matrix.

Input Format:
First line of input contains N, M - the size of the matrix. Its followed by N lines each containing M integers - elements of the matrix.

Constraints:
1 <= N, M <= 100
-106 <= ar[i] <= 106

Output Format:
Print row-wise sum of the matrix, separated by a newline.

Sample Input:
2 3
5 -1 3
19 8 -5

Sample Output:
7
22
*/

//Program
#include<bits/stdc++.h>
using namespace std;
int main() {
    int m,n;
    cin>>m>>n;                                               //taking the input of dimensions of matrix
    if(m<1 || n>100)                                         //an edge case
        return 0;
    for(int i=0;i<m;i++) {
        int sum=0;                                           //for every row we are declaring a sum initializing with 0
        for(int j=0;j<n;j++) {
            int num;
            cin>>num;
            sum+=num;                                       //summing up the elements of row
        }
        cout << sum << endl;                                //printing the sum of each row simultaneously
    }
    return 0;
}

//Space Complexity: O(1)
//Time Complexity: O(m*n)
