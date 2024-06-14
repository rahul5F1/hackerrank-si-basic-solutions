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
    for(int i=0;i<n;i++){                                      //iterating the entire array
        if(arr[i]==k)
            return i;                                          //returning the index of required element if we found in the array
    }
    return -1;                                                 //returning -1 if we didn't find the required element in the array
}
int main() {
    int n,k;
    cin>>n>>k;                                                  //taking no. of elements and element to search inputs
    int arr[n];                                                 //declaring an array
    for(int i=0;i<n;i++)
        cin>>arr[i];                                           //storing the array elements
    cout<<linearSearch(arr,n,k);                               //calling linear search function and returning the index of element to be searched
    return 0;
}                                                              //Space Complexit: O(1)          //Time Complexity: O(n)


//Recursive approach
#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[],int n,int k,int ind){
    if(ind==n)
        return -1;                                             //returning -1 if we didn't find the required element in the array
    if(arr[ind]==k)
        return ind;                                           //returning the index of required element if we found in the array
    return linearSearch(arr,n,k,ind+1);                       //recursive call to search still if there are elements in the array to search
}
int main() {
    int n,k;
    cin>>n>>k;                                                //taking no. of elements and element to search inputs
    int arr[n];                                               //declaring an array
    for(int i=0;i<n;i++)
        cin>>arr[i];                                         //storing the array elements                    
    cout<<linearSearch(arr,n,k,0);                           //calling linear search function and returning the index of element to be searched
    return 0;
}                                                            //Space Complexity: O(n) (Auxiliary space)          //Time Complexity: O(n)
