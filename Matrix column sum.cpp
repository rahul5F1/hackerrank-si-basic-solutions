
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
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    for(int j=0;j<n;j++) {
        int sum = 0;
        for(int i=0;i<m;i++) {
            sum+=a[i][j];
        }
        cout<<sum<<endl;
    }
    return 0;
}

//Space Complexity: O(1)
//Time Complexity: O(2*m*n)
