// Link - https://leetcode.com/problems/next-permutation/
#include <algorithm>
#include <climits>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <string.h>
#include <vector>
#define int long long int
#define endl "\n"
#define FastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

void io() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

class Solution {
public:
    void nextPermutation(vector<int> &nums) {
        next_permutation(nums.begin(), nums.end());
    }
};

void run() {
    Solution mysol;
}

int32_t main() {
    FastIO
    //io();
    run();
}