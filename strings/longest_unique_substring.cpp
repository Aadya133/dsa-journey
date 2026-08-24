/*
    Problem: Longest Substring Without Repeating Characters

    Find the length of the longest substring
    containing no repeated characters.

    Example:
    Input:
    "abcabcbb"

    Output:
    3

    Explanation:
    "abc" is the longest substring without
    repeating characters.

    Approach:
    Sliding Window + frequency tracking.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int longestUniqueSubstring(const string& s) {

    vector<int> frequency(256, 0);

    int left = 0;
    int maximumLength = 0;

    for (int right = 0; right < s.length(); right++) {

        frequency[s[right]]++;

        while (frequency[s[right]] > 1) {

            frequency[s[left]]--;
            left++;
        }

        maximumLength =
            max(maximumLength, right - left + 1);
    }

    return maximumLength;
}

int main() {

    string s = "abcabcbb";

    cout << "Longest length: "
         << longestUniqueSubstring(s)
         << endl;

    return 0;
}