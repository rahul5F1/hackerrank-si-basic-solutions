
/*
Find the missing number in the given list of integers. The list contains 1 to 100 integers but one of the integer is missing. There are no duplicates in the list.

Input Format:
Input contains a list of 99 integers.

Constraints:
1 <= L[i] <= 100

Output Format:
Print the missing number in the list.

Sample Input
12 15 9 1 71 77 81 29 70 19 11 83 56 2 57 53 68 99 82 100 22 10 51 40 34 98 80 38 39 89 94 4 26 64 45 8 90 24 93 33 21 7 49 88 5 28 55 67 65 50 32 58 6 37 46 42 20 44 41 3 78 76 73 16 31 85 91 54 60 47 97 43 84 17 35 69 13 30 61 79 72 48 23 66 52 27 62 87 63 18 75 96 14 86 95 74 25 59 36 

Sample Output:
92
*/
//Program
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> numbers;
    int num;
    while(cin >> num)
        numbers.push_back(num);
    int answer=accumulate(numbers.begin(), numbers.end(), 0);                  //sum of the input numbers
    int formula_answer=(100 * 101)/2;
    cout<< formula_answer - answer <<endl;
    return 0;
}

//Space Complexity: O(n)
//Time Complexity: O(n)
