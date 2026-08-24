/*
    Problem: Character Frequency

    Count the frequency of each lowercase character
    in a string.

    Example:
    Input:
    "programming"

    Output:
    p -> 1
    r -> 2
    o -> 1
    g -> 2
    a -> 1
    m -> 2
    i -> 1
    n -> 1

    Approach:
    Use an integer array of size 26.

    For each character:
        freq[c - 'a']++

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <string>
using namespace std;

void characterFrequency(const string& s) {

    int freq[26] = {0};

    for (char c : s) {
        freq[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {

        if (freq[i] > 0) {
            cout << char('a' + i)
                 << " -> "
                 << freq[i]
                 << endl;
        }
    }
}

int main() {

    string s = "programming";

    characterFrequency(s);

    return 0;
}