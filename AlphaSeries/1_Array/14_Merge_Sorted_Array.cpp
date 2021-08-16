// Link - https://leetcode.com/problems/merge-sorted-array/
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
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        int i = 0, j = 0, k = 0;
        vector<int> res(m + n);
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                res[k++] = nums1[i++];
            } else {
                res[k++] = nums2[j++];
            }
        }
        while (i < m) {
            res[k++] = nums1[i++];
        }
        while (j < n) {
            res[k++] = nums2[j++];
        }
        for (int i = 0; i < (m + n); i++) {
            nums1[i] = res[i];
        }
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