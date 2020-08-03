#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define fi first
#define sec second
#define MAX 500
using namespace std;

void fun2(int r, int c, int n, int m, vector<vector<int>> &v, vector<string> A)
{
    if (r - 1 >= 0 and c - 1 >= 0)
        v[r - 1][c - 1] += 1;
    for (int i = r - 2; i >= 0; --i)
    {
        for (int j = c - 2; j >= 0; --j)
        {
            if (A[i + 1][j + 1] == 1)
                break;
            else
                v[i][j] += 1;
        }
    }
    if (r - 1 >= 0)
        v[r - 1][c] += 1;
    for (int i = r - 2; i >= 0; --i)
    {
        if (A[i + 1][c] == 1)
            break;
        else
            v[i][c] += 1;
    }
    if (r - 1 >= 0 and c + 1 < m)
        v[r - 1][c + 1] += 1;
    for (int i = r - 2; i >= 0; --i)
    {
        for (int j = c + 2; j < m; ++j)
        {
            if (A[i + 1][j - 1] == 1)
                break;
            else
                v[i][j] += 1;
        }
    }
    if (c - 1 >= 0)
        v[r][c - 1] += 1;
    for (int j = c - 2; j >= 0; --j)
    {
        if (A[r][j + 1] == 1)
            break;
        else
            v[r][j] += 1;
    }
    if (c + 1 < m)
        v[r][c + 1] += 1;
    for (int j = c + 2; j < m; ++j)
    {
        if (A[r][j - 1] == 1)
            break;
        else
            v[r][j] += 1;
    }

    if (r + 1 < n and c - 1 >= 0)
        v[r + 1][c - 1] += 1;
    for (int i = r + 2; i < n; ++i)
    {
        for (int j = c - 2; j >= 0; --j)
        {
            if (A[i - 1][j + 1] == 1)
                break;
            else
                v[i][j] += 1;
        }
    }
    if (r + 1 < n)
        v[r + 1][c] += 1;
    for (int i = r + 2; i < n; ++i)
    {
        if (A[i - 1][c] == 1)
            break;
        else
            v[i][c] += 1;
    }
    if (r + 1 < n and c + 1 < m)
        v[r + 1][c + 1] += 1;
    for (int i = r + 2; i < n; ++i)
    {
        for (int j = c + 2; j < m; ++j)
        {
            if (A[i - 1][j - 1] == 1)
                break;
            else
                v[i][j] += 1;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // cout << "fuck" << endl;
    vector<string> A = {"111",
                        "111",
                        "111"};

    int n = A.size();
    int m = A[0].size();
    vector<vector<int>> v(n, vector<int>(m, 0));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (A[i][j] == '1')
            {
                fun2(i, j, n, m, v, A);
            }
        }
    }
    for (auto it : v)
    {
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << '\n';
    }
}