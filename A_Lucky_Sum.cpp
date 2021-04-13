#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

vector<ll> nums;

ll num(string s) {
    ll val = 0;
    reverse(all(s));
    ll x = 1;
    for (int i = 0; i < s.size(); i++) {
        val += (s[i] - '0') * x;
        x *= 10;
    }
    return val;
}

void sum(int d) {
    ll cal = 0;
    for (int i = 0; i < d; i++) {
        string t = "";
        for (int k = 0; k < i; k++) {
            t += '4';
        }
        for (int k = i + 1; k < d; k++) {
            t += '7';
        }
        do {
            nums.push_back(num(t));

        } while (next_permutation(all(t)));

        t = "";
        for (int k = 0; k < i; k++) {
            t += '7';
        }
        for (int k = i + 1; k < d; k++) {
            t += '4';
        }
        do {
            nums.push_back(num(t));

        } while (next_permutation(all(t)));
    }
}

void Solve() {
    // Your code goes here.
    ll l, r;
    cin >> l >> r;

    ll ans = 0;
    for (int i = 1; i <= 9; i++) {
        sum(i);
    }

    sort(all(nums));
    // for (int i = 0; i < 10; i++) cout << nums[i] << " ";
    // cout << nl;

    for (ll i = 0; i < nums.size(); i++) {
        // cout << "l, r, nums[i]: " << l << " " << r << " " << nums[i] << nl;
        if (nums[i] < l) {
            continue;
        } else if (nums[i] >= l && nums[i] <= r && l <= r) {
            ans += nums[i] * (nums[i] - l + 1);
            l = nums[i] + 1;
        } else if (nums[i] >= l && nums[i] > r && l <= r) {
            ans += (r - l + 1) * nums[i];
            break;
        } else {
            break;
        }
    }

    cout << ans << nl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}