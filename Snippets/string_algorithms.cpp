#include <bits/stdc++.h>
using namespace std;

// Returns the length of longest common subsequence
int lcs(string s, string t)
{
    int ss = s.size(), tt = t.size();
    vector<vector<int>> dp(ss + 1, vector<int>(tt + 1, 0));

    for (int row = 0; row < ss; row++)
    {
        for (int col = 0; col < tt; col++)
        {
            if (s[row] == t[col])
            {
                dp[row + 1][col + 1] = 1 + dp[row][col];
            }
            else
            {
                dp[row + 1][col + 1] = max(dp[row + 1][col], dp[row][col + 1]);
            }
        }
    }

    return dp[ss][tt];
}

// Returns the length of the longest palindromic subsequence
int lps(string s)
{
    string t = s;
    reverse(t.begin(), t.end());
    int ss = s.size(), tt = t.size();
    vector<vector<int>> dp(ss + 1, vector<int>(tt + 1, 0));

    for (int row = 0; row < ss; row++)
    {
        for (int col = 0; col < tt; col++)
        {
            if (s[row] == t[col])
            {
                dp[row + 1][col + 1] = 1 + dp[row][col];
            }
            else
            {
                dp[row + 1][col + 1] = max(dp[row + 1][col], dp[row][col + 1]);
            }
        }
    }

    return dp[ss][tt];
}

int main()
{

    return 0;
}