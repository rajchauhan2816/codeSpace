// Link - https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
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
    int maxProfit(vector<int> &prices) {
        int n = prices.size();
        int minP = prices[0];
        int ans = 0;
        for (int i = 1; i < n; i++) {
            ans = max(ans, prices[i] - minP);
            minP = min(minP, prices[i]);
        }
        return ans;
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