
/*
Print unique elements of the array in the same order as they appear in the input.

Note: Do not use any inbuilt functions/libraries for your main logic.

Input Format:
First line of input contains a single integer N - the size of array and second line contains array elements.

Constraints:
1 <= N <= 100
0 <= ar[i] <= 109

Output Format:
Print unique elements of the array.

Sample Input:
7
5 4 10 9 21 4 10

Sample Output:
5 9 21
  */
/*
As already mentioned not to use any inbuilt functions try to solve it without using hash map or count array or hash set.
  */
#include<bits/stdc++.h>
using namespace std;
void element(int arr[],int n) {
    int i,j;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(arr[i]==arr[j] && i!=j)                             //executes when we find any duplicate element and skips the iteration
                break;
        }
        if(j==n)                                                   //executes when we find unique element and prints the element
            cout<<arr[i]<<" ";
    }
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    element(arr,n);                                               //calling the function
    return 0;
}
//Space Complexity: O(1)  we are not using any extra space
//Time Commplexity: O(n^2)  there is a nested for loop that runs for n*n times
