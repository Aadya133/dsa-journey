/*
    Problem: Valid Anagram

    Determine whether two strings are anagrams.

    Example:
    "listen"
    "silent"

    Output:
    true

    Approach:
    Count the frequency of every character
    in both strings and compare the frequencies.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

bool isAnagram(const string& s1, const string& s2) {

    if (s1.length() != s2.length()) {
        return false;
    }

    int freq[26] = {0};

    for (char c : s1) {
        freq[c - 'a']++;
    }

    for (char c : s2) {
        freq[c - 'a']--;
    }

    for (int i = 0; i < 26; i++) {

        if (freq[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {

    string s1 = "listen";
    string s2 = "silent";

    if (isAnagram(s1, s2)) {
        cout << "Anagram" << endl;
    }
    else {
        cout << "Not an anagram" << endl;
    }

    return 0;
}
