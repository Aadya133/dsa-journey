/*
    Problem: Valid Palindrome

    Check whether a string is a palindrome while
    ignoring spaces, punctuation and capitalization.

    Example:
    "A man, a plan, a canal: Panama"

    Output:
    true

    Approach:
    Use two pointers:
        left  -> beginning
        right -> end

    Ignore non-alphanumeric characters.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(const string& s) {

    int left = 0;
    int right = s.length() - 1;

    while (left < right) {

        while (left < right &&
               !isalnum(s[left])) {
            left++;
        }

        while (left < right &&
               !isalnum(s[right])) {
            right--;
        }

        if (tolower(s[left]) !=
            tolower(s[right])) {

            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {

    string s = "A man, a plan, a canal: Panama";

    cout << boolalpha
         << isPalindrome(s)
         << endl;

    return 0;
}