
/*
Given a string, compress the given string. See example for more details.

Input Format:
Input contains a string S, consisting of lowercase and uppercase characters.

Constraints:
1 <= len(S) <= 100

Output Format:
Print the compressed string.

Sample Input:
aaaBBBBhhhekkL

Sample Output:
a3B4h3e1k2L1

Explanation:
In the given string, a is repeating for 3 times continuosly. So after compression it becomes a3.
Similarly,
B is repeating for 4 times - B4
h is repeating for 3 times - h3
e is repeating for 1 times - e1
k is repeating for 2 times - k2
L is repeating for 1 times - L1
*/

//Program
#include <iostream>
#include <string>
using namespace std;

string compress(string str) {
    string comp_str;                                                 //declaring a string that stores resultant string which is to be returned
    int ind=0;                                                       //initially ind value will be 0
    int len=str.length();                                            //declaring the length of string
    while(ind!=len) {
        int count=1;                                                //declaring count variable initializing with 1 whenever the loop starts
        while((ind < len-1) && (str[ind]==str[ind+1])) {            //executes the loop until there is any repeating character in the string
            count++;                                                //incrementing count of repeatation of each character
            ind++;                                                  //incrementing ind i.e., traversing the string till certain loop condition
        }
        comp_str += str[ind] + to_string(count);                    //appending the character and its count to resultant string
        ind++;                                                      //since ind will be on last character of repeating section then we need to increment it
    }

    return comp_str;                                                //returning the resultant string
}

int main() {
    string str;
    cin>>str;                                                     //taking the input string
    cout<<compress(str)<<endl;                                    //calling the function for compressing the string then printing the resultant string
    return 0;
}

//Space Complexity: O(n)
//Time Complexity: O(2*n)
