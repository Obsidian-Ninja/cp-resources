#include <bits/stdc++.h>
using namespace std;

// Macros to make life easier
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)((x).size())
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define per(i, a, b) for (int i = a; i >= b; --i)

// Constants
const int MOD = 1e9 + 7;
const ll INF = 1e18;
const ld EPS = 1e-9;

// Fast input/output
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

// GCD and LCM
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

// Modular Arithmetic
ll mod_add(ll a, ll b, ll mod = MOD) { return (a % mod + b % mod) % mod; }
ll mod_sub(ll a, ll b, ll mod = MOD) { return (a % mod - b % mod + mod) % mod; }
ll mod_mul(ll a, ll b, ll mod = MOD) { return (a % mod * b % mod) % mod; }
ll mod_pow(ll a, ll b, ll mod = MOD) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = mod_mul(res, a, mod);
        a = mod_mul(a, a, mod);
        b >>= 1;
    }
    return res;
}

// Prime checker
bool is_prime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// Binary Search
template <typename T>
int binary_search(vector<T>& arr, T target) {
    int low = 0, high = sz(arr) - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

// Debugging utilities
template <typename T>
void debug(T x) { cerr << x << endl; }

template <typename T, typename V>
void debug(pair<T, V> p) { cerr << "{" << p.ff << ", " << p.ss << "}"; }

template <typename T>
void debug(vector<T> v) { for (T i : v) cerr << i << " "; cerr << endl; }

int main() {
    fast_io();

    int t; // Number of test cases
    cin >> t;
    while (t--) {
        // Solution for each test case goes here
    }

    return 0;
}