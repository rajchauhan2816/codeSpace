// Link - https://leetcode.com/problems/array-partition-i/
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
    int arrayPairSum(vector<int> &nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int res = 0;
        for (int i = 0; i < n; i = i + 2) {
            res = res + nums[i];
        }
        return res;
    }
};

void run() {
    Solution mysol;
    vector<int> nums = {6, 2, 6, 5, 1, 2};
    cout << mysol.arrayPairSum(nums);
}

int32_t main() {
    FastIO
    //io();
    run();
}