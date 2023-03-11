#include <bits/stdc++.h>
using namespace std;


// find the first occurance of `val`
// less, less, [[eq]], eq, eq, high, high
template <typename T>
int find_low_bound(vector<T> arr, int s, int e, T val) {
    int n = e-s-1, p = e-1;
    for (int step = 1<<(int)log2(n); step; step>>=1) {
        if (p-step >= s && arr[p-step]>=val) p -= step;
    }
    return p;
}

// find the last occurance of `val`
// less, less, eq, eq, [[eq]], high, high
template <typename T>
int find_high_bound(vector<T> arr, int s, int e, T val) {
    int n = e-s-1, p = s;
    for (int step = 1<<(int)log2(n); step; step>>=1) {
        if (p+step < e && arr[p+step]<=val) p += step;
    }
    return p;
}

// get an occurance count of `val`
// less, less, #[[eq, eq, eq]], high, high
template <typename T>
int get_count(vector<T> arr, int s, int e, T val) {
    int n = e-s-1, pl = s, ph = s;
    for (int step = 1<<(int)log2(n); step; step>>=1) {
        if (pl+step < e && arr[pl+step]<val) pl += step;
        if (ph+step < e && arr[ph+step]<=val) ph += step;
    }
    return ph-pl;
}