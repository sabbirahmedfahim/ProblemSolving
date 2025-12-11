// code-seperately under each sub-topics

#include <iostream>
using namespace std;
int main()
{
   

   return 0;
}

/* ============================================================================
   ============================   1D ARRAY   ==================================
   ============================================================================ */

/* [NOT DONE] Definition & syntax of 1D array */
/* [NOT DONE] Max Size of n-D Array (1E7 vs 1E6) */
/* [NOT DONE] Declaring and initializing (static & runtime size) */
// int b[] = {1,2,3,4,5};
// int n; cin >> n; int arr[n];
/* [NOT DONE] Taking input/output using loops */
/* [NOT DONE] Accessing and modifying array elements */
/* [NOT DONE] Common mistakes (index out of bounds, uninitialized values) */
/* [NOT DONE] Loop operations: sum, max, min */
/* [NOT DONE] Common sort, reverse functions [#include <algorithm>]
/* [NOT DONE] Contiguous memory concept (how arrays are stored) */ 
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[3] = {10, 22, 8};
//     cout << &arr[0] << endl;
//     cout << &arr[1] << endl;
//     cout << &arr[2] << endl;

//     return 0;
// }
/* [NOT DONE] Frequency count using simple array (known as frequency array/counting array) */
// int freq[10] = {0};
/* [NOT DONE] Counting array for characters and ascci table */
/* [NOT DONE] Printing ASCII value of a character */
// char ch = 'A';
// cout << ch << " -> ASCII: " << int(ch) << endl;
/* [NOT DONE] Converting ASCII code to character */
// int code = 97;
// char c1 = char(code);
// cout << "ASCII 97 -> Character: " << c1 << endl;
/* [NOT DONE] Simple arithmetic with ASCII values */
// char ch2 = 'a';
// char nextChar = ch2 + 2;  // Moves 2 steps forward in ASCII
// cout << ch2 << " + 2 -> " << nextChar << endl;
/* [NOT DONE] Updating character using shorthand */
// char ch3 = 'a';
// ch3 += 2;
// cout << "a += 2 -> " << ch3 << endl;
/* [NOT DONE] Frequency of lowercase letters using ASCII */
// int freq[26] = {0};
// string s = "abcabc";
// for(char c : s) {
//     freq[c - 'a']++;
// }
// cout << "Frequencies of a,b,c: ";
// cout << freq[0] << " " << freq[1] << " " << freq[2] << endl;
/* [NOT DONE] Passing 1D arrays to functions */
// void printArray(int a[], int n)
/* [NOT DONE] Practice Problem */
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V


/* ============================================================================
   ============================   2D ARRAY   ==================================
   ============================================================================ */

/* [NOT DONE] Definition & syntax of 2D array */
/* [NOT DONE] Declaring & initializing 2D arrays */
/* [NOT DONE] I suggest 1-based index for 2d array */
/* [NOT DONE] Input: row-wise and column-wise */
/* [NOT DONE] Row-major memory storage concept */
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[2][3]={{1,2,3},
//                    {4,5,6}};
//     cout<<"Row-major addresses:\n";
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             cout<<"&arr["<<i<<"]["<<j<<"]="<<&arr[i][j]<<"\n";
//         }
//     }
//     cout<<"\nColumn-major simulation:\n";
//     for(int j=0;j<3;j++){
//         for(int i=0;i<2;i++){
//             cout<<"arr["<<i<<"]["<<j<<"]="<<&arr[i][j]<<"\n";
//         }
//     }
//     return 0;
// }
/* [NOT DONE] Printing a 2D matrix */
/* [NOT DONE] Row sum / column sum operations */
/* [NOT DONE] Max element in matrix */
/* [NOT DONE] Counting occurrences of X in a matrix */
/* [NOT DONE] Passing 2D arrays to functions (fixed column size rule) */
// void print(int arr[][2])


/* ============================================================================
   ============================   3D ARRAY   ==================================
   ============================================================================ */

/* [NOT DONE] Three-Dimensional Array = 3 levels of data, Tuple */
/* [NOT DONE] Input */
/* [NOT DONE] Syntax: dataType arrayName[dim1][dim2][dim3]; */
/* [NOT DONE] Example: Monthly sales tracking */
// int sales[12][4][7];
// [12] = 12 months
// [4] = 4 weeks per month
// [7] = 7 days per week


/* ============================================================================
   ============================   STRING   ====================================
   ============================================================================ */


/* [NOT DONE] Why C-style strings are limited (Difference between char array and std::string) */
/* [NOT DONE] Introducing std::string and #include <string> */
/* [NOT DONE] Declaration & initialization */
/* [NOT DONE] Input: cin >> s; and getline(cin, s); */ 
/* [NOT DONE] string.size(), string.length() */
/* [NOT DONE] Indexing like arrays */
/* [NOT DONE] Concatenation using + */
/* [NOT DONE] Comparing strings */
/* [NOT DONE] Stringstream (#include <string>, #include <sstream>) */
   // string s = "LU ACM Beginner Workshop";
   // stringstream ss(s);
   // string word;

   // while (ss >> word)
   // {
   //    cout << word << endl;
   // }
// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J
// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P

/* ============================================================================
   ============================= STRING FUNCTIONS ==============================
   ============================================================================ */

/* ========================== BASIC FUNCTIONS (Must Know) ===================== */

/* [ ] s.length()        // returns length of string */
/* [ ] s.size()          // same as length() */

/* [ ] s[i]              // access character at index i */
/* [ ] s.front()         // first character */
/* [ ] s.back()          // last character */

/* [ ] cin >> s          // input without spaces */
/* [ ] getline(cin, s)   // input with spaces */

/* [ ] s.push_back('a')  // add character at end */
/* [ ] s.pop_back()      // remove last character */
/* [ ] s += "text"       // append string */

/* [ ] s.empty()         // check if string is empty */
/* [ ] s.clear()         // clear entire string */
/* [ ] s.resize(new_size)             // resize string */
/* [ ] s.substr(pos, len) */
/* [ ] s.find("abc"), string::npos */
/*
s.insert(pos, "abc")     // insert substring
s.erase(pos, len)        // erase len characters
s.replace(pos, len, "xyz") // replace range
*/


/* ============================== ITERATORS =================================== */
// [NOT DONE] Pointer
// char arr[] = "abc";
// char* p = &arr[0]; // pointer holds memory address
// cout << *p;        // dereference -> prints 'a'

// [NOT DONE] Iterators
// for(auto it = s.begin(); it != s.end(); ++it){
//         cout << *it << " ";  // *it dereferences iterator to get value
//     }
// 'it' stores the iterator (pointer-like)
// '*it' dereferences to get actual character
/* [ ] s.begin(), s.end()             // forward iterators */
/* [ ] s.rbegin(), s.rend()           // reverse iterators */

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/L

/* ============================================================================
   ==============     All You Need To Know About Contest     ==================
   ============================================================================ */

/*
- OJ
- WA, AC, TLE, Runtime Error, MLE, Compilation Error, Presentation Error
- Test Case, Constraints, Max Size
- Odd-Even, Binary String, Palindrome, Subarray, Substring, Subsequence, Adjacent, 
Sorted in non-decreasing order, Edge case, Frequency, Unique Elements, Distinct Elements, 
0-indexed vs 1-indexed, Type Casting, Variable names matters
- long long will save, but do not use blindly
- VS Code/Codeblocks e Accepted hoy, submit dile wrong-answer-on-test-case-2 ashe keno?
*/

/* ============================================================================
   =============================     QnA     ==================================
   ============================================================================ */

/* Ask Your Queries! */


/* ============================================================================
   =============================     END     ==================================
   ============================================================================ */