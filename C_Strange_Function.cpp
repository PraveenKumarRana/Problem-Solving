// Author: Praveen Kumar Rana
// Date: 03-07-2021 (19:02:16)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

int not_div(int n) {
    for (int j = 1;; j++) {
        if (n % j != 0) {
            return j;
        }
    }
    return 0;
}

string bin(int n) {
    string s = "";
    while (n > 0) {
        if (n & 1)
            s += '1';
        else
            s += '0';
        n /= 2;
    }

    return s + "00000000000000000000";
}

void solve() {
    // Write your code here.
    int t;
    cin >> t;

    vector<int> nums, sums;
    vector<int> tmp;
    for (int i = 1; i <= 20; i++) {
        tmp.push_back(i);
    }

    for (int i = 1; i <= (1 << 20); i++) {
        string s = bin(i);
        int prod = 1;
        for (int i = 0; i < 20; i++) {
            if (s[i] == '1') {
                prod *= tmp[i];
            }
        }
        nums.push_back(prod);
    }

    sort(all(nums));

    sums.push_back(not_div(nums[0]));
    for (int i = 1; i < nums.size(); i++) {
        sums.push_back(sums[i - 1] + not_div(nums[i]));
    }

    for (int i = 0; i < 10; i++) {
        cout << sums[i] << " ";
    }
    cout << NL;

    while (t--) {
        int n;
        cin >> n;
        int odd = (n / 2) + (n & 2);
        int ind = upper_bound(nums.begin(), nums.end(), n) - nums.begin() - 1;
        ind--;
        int sum = 0;
        if (ind >= 0) {
            sum = sums[ind];
        }
        cout << "Sum: " << sum << NL;
        n -= (odd + ind + 1);
        cout << "ind, odd, n: " << ind << " " << odd << " " << n << NL;
        sum = ((sum % mod + (n * 3) % mod) % mod + (odd * 2) % mod) % mod;
        cout << sum << NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}