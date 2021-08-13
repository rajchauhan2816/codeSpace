// Link - https://leetcode.com/problems/3sum/
#include <algorithm>
#include <climits>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
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
    vector<vector<int>> threeSum(vector<int> &nums) {
        int n = nums.size();
        vector<vector<int>> res;
        map<vector<int>, bool> store;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            int num1 = nums[i];
            // perform binary search on remaining list
            int j = i + 1, k = n - 1;
            while (j < k) {
                int sum = num1 + nums[j] + nums[k];
                if (sum == 0) {
                    vector<int> temp = {num1, nums[j], nums[k]};
                    if (!store[temp]) {
                        store[temp] = true;
                    }
                    j++;
                    k--;
                } else if (sum < 0) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        for (auto v : store) {
            res.push_back(v.first);
        }
        return res;
    }
};

void run() {
    Solution mysol;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res = mysol.threeSum(nums);
    cout << endl;
}

int32_t main() {
    FastIO
    //io();
    run();
}