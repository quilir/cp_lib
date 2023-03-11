#include <bits/stdc++.h>
using namespace std;

#ifndef LOCAL
#pragma GCC optimize("O3")
#endif

#define fi first
#define se second
#define endl '\n'
#define sp <<" "<<
#define eb emplace_back
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()

using ll = long long;
#define vec vector

template <class T> void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "}\n"; }
template <class T> void print_m(vector<vector<T>> &m) { for (auto v : m) print_v(v); cout << '\n'; }

#define fora(a) for(auto e:a)
#define it(i,s,e) for(long long int i=s;i<e;i++)
#define ita(i,s,e) for(long long int i=s;i<=e;i++)
#define itr(i,e,s) for(long long int i=e-1;i>=s;i--)
#define urs(r...)typename decay<decltype(r)>::type
#define rep(i,n)for(urs(n)i=0;i<(n);++i)

void solve() {

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    
	#ifndef ONLINE_JUDGE
	freopen("in","r",stdin);
	freopen("out","w",stdout);
	#endif

	int t;
	cin >> t;
    rep(_,t) solve();

	return 0;
}