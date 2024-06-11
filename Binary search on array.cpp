/*
Given a sorted array of integers, search a given key in the array using binary search.
Note: Do not use any inbuilt functions/libraries for your main logic.
(Try to practice both iterative and recursive codes for Binary Search)

Input Format:
First line of input contains two integers, N - size of the array and K - search key. Second line contains the elements of the sorted array.

Constraints:
1 <= N <= 102
0 <= ar[i] <= 109

Output Format:
Print "true" if key is present in the array, otherwise, print false.

Sample Input:
5 19
2 19 23 35 38

Sample Output:
true
*/

//Iterative approach
#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int arr[],int n,int k){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k)
            return true;
        else if(arr[mid]<k)
            low=mid+1;
        else
            high=mid-1;
    }
    return false;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    bool ans=binarySearch(arr,n,k);
    if(ans)
        cout<<"true";                                                 //Space Complexity: O(1)
    else                                                              //Time Complexity: O(n)
        cout<<"false";
    return 0;
}

//Recursive approach
#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int arr[],int n,int k,int low,int high){
    if(low>high)
        return false;
    int mid=(low+high)/2;
    if(arr[mid]==k)
        return true;
    else if(arr[mid]<k)
        return binarySearch(arr,n,k,mid+1,high);
    else
        return binarySearch(arr,n,k,low,mid-1);
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    bool ans=binarySearch(arr,n,k,0,n-1);
    if(ans)
        cout<<"true";                                                  //Space Complexity: O(n) (Auxiliary space)
    else                                                               //Time Complexity: O(n)
        cout<<"false";
    return 0;
}
