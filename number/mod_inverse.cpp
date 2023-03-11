#include <bits/stdc++.h>
using namespace std;

using ll = long long;

vector<ll> fac;
vector<ll> inv;
vector<ll> finv;

void precompute(int size, ll mod) {
    fac.emplace_back(1); fac.emplace_back(1);
    inv.emplace_back(0); inv.emplace_back(1);
    finv.emplace_back(1); finv.emplace_back(1);
    for (ll i=2; i<size; i++) {
        fac.emplace_back(fac.back() * i % mod);
        inv.emplace_back((mod-inv[mod % i]) * (mod/i) % mod);
        finv.emplace_back(finv.back() * inv.back() % mod);
    }
}

long long mod_inv(long long a, long long mod){
    return a>1 ? (mod - mod_inv(mod%a,a)*mod/a) % mod : 1;
}