/*start from 30 nov 2024*/

class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        // Your code here
        vector<int> first(26, 0); 

        
        for (char ch : s1) {
            first[ch - 'a']++;
        }
    
        for (char ch : s2) {
            first[ch - 'a']++;
        }
    
        for (int count : first) {
            if (count % 2 != 0) {
                return false;
            }
        }
    
        return true;
    }
};



//complete solution
// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// class Solution {
//   public:
//     // Function to check whether two strings are anagram of each other or not.
//     bool areAnagrams(string& s1, string& s2) {
//         if (s1.length() != s2.length()) {
//             return false;  // Anagrams must have the same length.
//         }

//         vector<int> freq1(26, 0), freq2(26, 0);

//         for (char ch : s1) {
//             freq1[ch - 'a']++;
//         }

//         for (char ch : s2) {
//             freq2[ch - 'a']++;
//         }

//         return freq1 == freq2;  // Compare both frequency arrays.
//     }
// };

// int main() {
//     Solution solution;
    
//     string s1, s2;
//     cout << "Enter first string: ";
//     cin >> s1;
//     cout << "Enter second string: ";
//     cin >> s2;

//     if (solution.areAnagrams(s1, s2)) {
//         cout << "The strings are anagrams of each other." << endl;
//     } else {
//         cout << "The strings are not anagrams of each other." << endl;
//     }

//     return 0;
// }
