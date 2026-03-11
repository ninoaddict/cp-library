#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

// Pragmas
// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

using namespace std;
using namespace __gnu_pbds;

// Data types
using si = short int;
using ll = long long;
using ull = unsigned long long;
using lll = __int128;
using ld = long double;

// Pairs
using pii = pair<int, int>;
using psi = pair<si, si>;
using pll = pair<ll, ll>;
using plll = pair<lll, lll>;
using pld = pair<ld, ld>;
using Matrix = vector<vector<ll>>;
using vi = vector<ll>;
#define fi first
#define se second
#define sz(a) (a).size()
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / gcd(a, b)) * b
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repk(i, n, k) for (int i = 1; i <= (n); i += (k))
#define rrep(i, n) for (int i = (n)-1; i >= 0; i--)
#define rrepk(i, n, k) for (int i = (n); i >= 1; i -= (k))
#define fore(i, a, b) for (int i = (a); i < (b); i++)
#define forek(i, a, b, k) for (int i = (a); i <= (b); i += (k))

// const ll INF  = 1e18;
const ll INF = 1e18;
const ll MININF = -1e18;
const ll MAXN = 1e5 + 7;
const ll MOD = 998244353;
const ll PRIMITIVE_ROOT = 3;

void solve(ll t) {
  // write your code here
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll t = 1;
  // cin >> t;
  for (ll i = 1; i <= t; i++) {
    solve(i);
  }
}