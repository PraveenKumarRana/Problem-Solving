#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int n;
    cin >> n;
    string s;
    cin >> s;

    int mid = n / 2;
    int midl = mid, midr = mid;

    if (s[mid] == '0') {
        while (s[midl] == '0') {
            midl--;
        }
        while (s[midr] == '0') {
            midr++;
        }
        midr--;
    }

    vector<int> a, b;
    for (int i = 0; i < midl; i++) {
        a.push_back(s[i] - '0');
    }
    for (int i = midl; i < n; i++) {
        a.push_back(s[i] - '0');
    }

    return 0;
}