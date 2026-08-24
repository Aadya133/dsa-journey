/*
    Problem: First Non-Repeating Character

    Find the first character that occurs exactly once.

    Example:
    Input:
    "leetcode"

    Output:
    l

    Approach:
    1. Count the frequency of each character.
    2. Traverse the string again.
    3. Return the first character with frequency 1.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

char firstNonRepeating(const string& s) {

    int freq[26] = {0};

    for (char c : s) {
        freq[c - 'a']++;
    }

    for (char c : s) {

        if (freq[c - 'a'] == 1) {
            return c;
        }
    }

    return '#';
}

int main() {

    string s = "leetcode";

    char result = firstNonRepeating(s);

    if (result != '#') {
        cout << "First non-repeating character: "
             << result << endl;
    }
    else {
        cout << "No non-repeating character." << endl;
    }

    return 0;
}