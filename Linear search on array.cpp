/*
Given an array on integers, search a given key in the array using linear search.
Note: Do not use any inbuilt functions/libraries for your main logic.

Input Format:
First line of input contains two integers, N - size of the array and K - search key. Second line contains the elements of the array.

Constraints:
1 <= N <= 102
0 <= ar[i] <= 109

Output Format:
If key is found, print the index of the array, otherwise print -1.

Sample Input:
5 15
-2 -19 8 15 4

Sample Output:
3
*/

//Iterative approach
#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k)
            return i;
    }
    return -1;
}
int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];                                           //Space Complexit: O(1)
    cout<<linearSearch(arr,n,k);                               //Time Complexity: O(n)
    return 0;
}

//Recursive approach
#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int n,int k,int ind){
    if(ind==n)
        return -1;
    if(arr[ind]==k)
        return ind;
    return linearSearch(arr,n,k,ind+1);
}
int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)                                       //Space Complexity: O(n) (Auxiliary space)
        cin>>arr[i];                                           //Time Complexity: O(n)
    cout<<linearSearch(arr,n,k,0);
    return 0;
}
