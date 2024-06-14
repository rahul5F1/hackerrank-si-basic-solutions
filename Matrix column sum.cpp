
/*
Given a matrix of size N x M, print column-wise sum, separated by a newline.

Input Format:
The first line of input contains N, M - the size of the matrix. Its followed by N lines each containing M integers - elements of the matrix.

Constraints:
1 <= N, M <= 100
-106 <= ar[i] <= 106

Output Format:
Print column-wise sum of the matrix, separated by newline.

Sample Input:
2 2
5 -1
19 8

Sample Output:
24
7
*/

//Program
#include <iostream>
using namespace std;
int main() {
    int m,n;
    cin>>m>>n;                                            //taking the dimensions of matrix as inputs
    int a[m][n];                                          //declaring a matrix of size (m,n)
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];                                 //storing the elements of matrix
        }
    }
    for(int j=0;j<n;j++) {                               //outer loop iterates column wise
        int sum = 0;                                     //for every column initially sum will be 0
        for(int i=0;i<m;i++) {                          //nested loop iterates row wise
            sum+=a[i][j];                               //summing up the elements of each column
        }
        cout<<sum<<endl;                                //printing sum of each column one by one
    }
    return 0;
}

//Space Complexity: O(1)
//Time Complexity: O(2*m*n)
