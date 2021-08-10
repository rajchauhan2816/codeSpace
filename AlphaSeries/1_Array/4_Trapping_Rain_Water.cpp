// Link - https://leetcode.com/problems/trapping-rain-water/
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
    int trap(vector<int> &height) {
        int n = height.size();
        vector<int> leftHeight(n);
        vector<int> rightHeight(n);
        // furthermost Left maximum height from current Postion
        leftHeight[0] = height[0];
        for (int i = 1; i < n; i++) {
            int currHeight = height[i];
            leftHeight[i] = max(leftHeight[i - 1], currHeight);
        }
        // furthermost Right maximum height from current Postion
        rightHeight[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            int currHeight = height[i];
            rightHeight[i] = max(rightHeight[i + 1], currHeight);
        }
        int trappedWater = 0;
        for (int i = 0; i < n; i++) {
            int minH = min(leftHeight[i], rightHeight[i]);
            int water = minH - height[i];
            trappedWater += water;
        }
        return trappedWater;
    }
};

void run() {
    Solution mysol;
    vector<int> height =  {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << mysol.trap(height);
}

int32_t main() {
    FastIO
    //io();
    run();
}