#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

int str_int(string a) {
    int x = 1;
    int num = 0;
    reverse(all(a));
    for (int i = 0; i < a.size(); i++) {
        num += (a[i] - '0') * x;
        x *= 10;
    }
    return num;
}

int sum(string a, string b) {
    int aa = str_int(a);
    int bb = str_int(b);

    return aa + bb;
}

void Solve() {
    // Your code goes here.
    string a, b;
    cin >> a >> b;

    int presum = sum(a, b);
    string aa = "", bb = "";
    for (auto c : a)
        if (c != '0') aa += c;
    for (auto c : b)
        if (c != '0') bb += c;

    string pr = "";
    while (presum > 0) {
        if (presum % 10 != 0) {
            pr += (char)(presum % 10 + '0');
        }
        presum /= 10;
    }
    reverse(all(pr));
    presum = str_int(pr);
    // cout << "Presum: " << presum << nl;
    int postsum = sum(aa, bb);

    if (presum == postsum)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}