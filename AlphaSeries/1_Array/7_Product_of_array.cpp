// Link - 
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
    vector<int> productExceptSelf(vector<int> &nums) {
        int n = nums.size();
        vector<int> LP(n);
        vector<int> RP(n);
        LP[0] = nums[0];
        RP[n - 1] = nums[n - 1];
        for (int i = 1; i < n; i++) {
            LP[i] = LP[i - 1] * nums[i];
        }
        for (int i = n - 2; i >= 0; i--) {
            RP[i] = RP[i + 1] * nums[i];
        }
        vector<int> res(n);
        res[0] = RP[1];
        res[n - 1] = LP[n - 2];
        for (int i = 1; i < n - 1; i++) {
            res[i] = LP[i - 1] * RP[i + 1];
        }
        return res;
    }
};

void run() {
    Solution mysol;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> res = mysol.productExceptSelf(nums);
    cout << endl;
}

int32_t main() {
    FastIO
    //io();
    run();
}