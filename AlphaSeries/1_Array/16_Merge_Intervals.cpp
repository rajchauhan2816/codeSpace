// Link - https://leetcode.com/problems/merge-intervals/
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
    vector<vector<int>> merge(vector<vector<int>> &intervals) {
        // sort on basis of start Time
        sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b) {
            return a[0] < b[0];
        });
        int n = intervals.size();
        vector<vector<int>> res;
        for (int i = 0; i < n; i++) {
            vector<int> start = intervals[i];
            vector<int> curr = intervals[i];
            int j = i + 1;
            while (j < n && curr[1] >= intervals[j][0]) {
                curr[1] = max(curr[1], intervals[j][1]);
                j++;
            }
            res.push_back({start[0], curr[1]});
            i = j - 1;
        }
        return res;
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