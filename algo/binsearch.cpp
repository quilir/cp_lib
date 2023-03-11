#include <bits/stdc++.h>
using namespace std;
using ll = long long;


// find the first occurance of `val`
// less, less, [[eq]], eq, eq, high, high
template <typename T>
ll find_low_bound(vector<T> arr, ll s, ll e, T val) {
    ll n = e-s-1, p = e-1;
    for (ll step = 1LL<<(int)log2(n); step; step>>=1) {
        if (p-step >= s && arr[p-step]>=val) p -= step;
    }
    return p;
}

// find the last occurance of `val`
// less, less, eq, eq, [[eq]], high, high
template <typename T>
ll find_high_bound(vector<T> arr, ll s, ll e, T val) {
    ll n = e-s-1, p = s;
    for (ll step = 1LL<<(int)log2(n); step; step>>=1) {
        if (p+step < e && arr[p+step]<=val) p += step;
    }
    return p;
}

// get an occurance count of `val`
// less, less, #[[eq, eq, eq]], high, high
template <typename T>
ll get_count(vector<T> arr, ll s, ll e, T val) {
    ll n = e-s-1, pl = s, ph = s;
    for (ll step = 1LL<<(int)log2(n); step; step>>=1) {
        if (pl+step < e && arr[pl+step]<val) pl += step;
        if (ph+step < e && arr[ph+step]<=val) ph += step;
    }
    return ph-pl;
}