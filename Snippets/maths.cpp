#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int mod = 1e9 + 7;

// Modular Exponentiation with mod
int binexp(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    int res = binexp(a, b / 2);
    if (b & 1)
    {
        return ((res % mod * res % mod) % mod * a % mod) % mod;
    }
    else
    {
        return (res % mod * res % mod) % mod;
    }
}

// Calculate factorial series with mod.
void factorial(vector<int>& f, int n)
{
    f[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        f[i] = (f[i - 1] * i) % mod;
    }
}

// Calculate value of nCr with mod.
int nCr(int n, int r) {
    vector<int> f(n + 1);
    factorial(f, n);

    return (f[n] * binexp((f[n - r] * f[r]) % mod, mod - 2)) % mod;
}

// Finds the fibbonachhi series with mod
void fib(vector<int>& f, int n)
{
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        f[i] = (f[i - 1] + f[i - 2]) % mod;
    }
}

void print(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int32_t main()
{
    int n = 5;
    vector<int> f(n + 1);
    factorial(f, n);
    print(f, n + 1);
    return 0;
}