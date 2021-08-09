// Link - https://leetcode.com/problems/median-of-two-sorted-arrays/
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
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
    }
};

void run() {
    Solution mysol;
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    cout << mysol.findMedianSortedArrays(nums1, nums2);
}

int32_t main() {
    FastIO
    //io();
    run();
}