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
    int low=0,high=n-1;                                             //initially low points to first element and high points to last element
    while(low<=high){
        int mid=(low+high)/2;                                       //calculation of mid
        if(arr[mid]==k)
            return true;                                            //returning true if we find the answer
        else if(arr[mid]<k)
            low=mid+1;                                              //eliminating the left part if our anser is not in the left part
        else
            high=mid-1;                                             //eliminating the right part if our anser is not in the right part
    }
    return false;                                                   //returning false if we didn't found our answer after searching entire array
}
int main(){
    int n,k;
    cin>>n>>k;                                                        //taking no. of elements and element to search as inputs
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    bool ans=binarySearch(arr,n,k);                                   //calling the binary search function
    if(ans)
        cout<<"true";                                                 //executes if binary search function returns true
    else                                                              
        cout<<"false";                                                //executes if binary search function returns false
    return 0;
}                                                                    //Space Complexity: O(1)       //Time Complexity: O(log n)

//Recursive approach
#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int arr[],int n,int k,int low,int high){
    if(low>high)
        return false;                                                      //returning false if we didn't found our answer
    int mid=(low+high)/2;
    if(arr[mid]==k)
        return true;                                                      //returning true if we find the answer
    else if(arr[mid]<k)
        return binarySearch(arr,n,k,mid+1,high);                          //eliminating the left part if our anser is not in the left part
    else
        return binarySearch(arr,n,k,low,mid-1);                           //eliminating the right part if our anser is not in the right part
    }
}
int main(){
    int n,k;
    cin>>n>>k;                                                           //taking no. of elements and element to search as inputs
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    bool ans=binarySearch(arr,n,k,0,n-1);                                //calling the binary search function
    if(ans)
        cout<<"true";                                                    //executes if binary search function returns true
    else                                                               
        cout<<"false";                                                  //executes if binary search function returns false
    return 0;
}                                                                       //Space Complexity: O(n) (Auxiliary space)            //Time Complexity: O(log n)
