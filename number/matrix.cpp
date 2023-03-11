#include <bits/stdc++.h>
using namespace std;

using ll = long long;

// create identity matrix
vector<vector<ll>> mat_id(int n) {
    vector<vector<ll>> res(n, vector<ll>(n));
    for (int i = 0; i < n; i++) res[i][i] = 1;
    return res;
}

// matrix multiplication
vector<vector<ll>> mat_mul(vector<vector<ll>> a, vector<vector<ll>> b, ll mod) {
    int n = a.size(); int t = a[0].size(); int m = b[0].size();
    vector<vector<ll>> res(n, vector<ll>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            for (int k = 0; k < t; k++)
                res[i][j] = (res[i][j] + a[i][k] * b[k][j]) % mod;
    return res;
}

// matrix exponentiation
vector<vector<ll>> mat_exp(vector<vector<ll>> a, ll b, ll mod) {
    int n = a.size();
    vector<vector<ll>> res = mat_id(n);
    while (b) {
        if (b & 1) res = mat_mul(res, a, mod);
        a = mat_mul(a, a, mod);
        b >>= 1;
    }
    return res;
}

// matrix transposition
vector<vector<ll>> mat_trans(vector<vector<ll>> a) {
    int n = a.size(); int m = a[0].size();
    vector<vector<ll>> res(m, vector<ll>(n));
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            res[j][i] = a[i][j];
    return res;
}