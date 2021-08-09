// Link - https://leetcode.com/problems/container-with-most-water/
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
    int maxArea(vector<int> &height) {
        int n = height.size();
        int maxArea = 0;
        int l = 0;
        int r = n - 1;
        while (l < r) {
            int distance = (r - l);
            int h = min(height[r], height[l]);
            int area = distance * h;
            maxArea = max(maxArea, area);
            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
        return maxArea;
    }
};

void run() {
    Solution a;
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << a.maxArea(height);
}

int32_t main() {
    FastIO
    //io();
    run();
}