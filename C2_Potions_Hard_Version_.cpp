#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    long long int n;
    cin >> n;
    multiset<long long int> st;
    long long int sum = 0, ans = 0;
    long long int cnt = 0;
    for (long long int i = 0; i < n; i++) {
        long long int x;
        cin >> x;
        // cout << "Sum: " << sum << "\n";
        if (x >= 0) {
            sum += x;
            cnt++;
        } else if (sum >= abs(x)) {
            sum += x;
            st.insert(x);
        } else {
            if (st.size() > 0) {
                long long int y = *st.begin();
                // cout << "Value of X & Y: " << x << " " << y << "\n";
                if (abs(y) > abs(x)) {
                    sum += abs(y);
                    st.erase(st.begin());
                    st.insert(x);
                    sum += x;
                }
            }
        }
    }

    // cout << "Cnt: " << cnt << "\n";

    cout << cnt + (long long int)st.size() << "\n";

    return 0;
}