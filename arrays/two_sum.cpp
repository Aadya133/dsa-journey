/*
Problem: Two Sum

Given an array of integers and a target,
find two indices whose values add up to the target.

Example:
Input:
arr = [2, 7, 11, 15]
target = 9

Output:
[0, 1]

Approach:
Use an unordered_map to store previously
seen values and their indices.

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& arr, int target) {
    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++) {
        int required = target - arr[i];

        if (mp.find(required) != mp.end()) {
            return {mp[required], i};
        }

        mp[arr[i]] = i;
    }

    return {};
}

int main() {

    vector<int> arr = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(arr, target);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
