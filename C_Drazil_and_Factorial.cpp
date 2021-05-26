#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

vector<ll> digits;

void discretise(ll val) {
    switch (val) {
        case 2: {
            digits.push_back(2);
            break;
        }
        case 3: {
            digits.push_back(3);
            break;
        }
        case 4: {
            digits.push_back(2);
            digits.push_back(2);
            digits.push_back(3);
            break;
        }
        case 5: {
            digits.push_back(5);
            break;
        }
        case 6: {
            digits.push_back(3);
            digits.push_back(5);
            break;
        }
        case 7: {
            digits.push_back(7);
            break;
        }
        case 8: {
            digits.push_back(2);
            digits.push_back(2);
            digits.push_back(2);
            digits.push_back(7);
            break;
        }
        case 9: {
            digits.push_back(2);
            digits.push_back(3);
            digits.push_back(3);
            digits.push_back(7);
            break;
        }
        default: {
            break;
        }
    }
}

void Solve() {
    // Your code goes here.
    ll n;
    cin >> n;
    ll val;
    cin >> val;

    while (val > 0) {
        ll mod = val % 10;
        if (mod > 1) {
            discretise(mod);
        }
        val /= 10;
    }

    sort(all(digits), greater<int>());
    for (auto c : digits) {
        cout << c;
    }
    cout << nl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}