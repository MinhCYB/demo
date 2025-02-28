/**
 *  Created at 17:29, Friday February 28, 2025 
 *  By ms24 <3
 */ 
// #pragma GCC optimize("Ofast,02,unroll-loops")
// #pragma GCC target("avx2,fma,popcnt,lzcnt,abm,bmi,bmi2")

#include <bits/stdc++.h>
using namespace std;

#define task ""
#define ll long long
// #define int ll
#define ii pair<int, int>
#define F first
#define S second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define uni(x) sort(all(x)), (x).resize(unique(all(x)) - (x).begin())
#define For(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)
#define Fod(i, a, b) for (int i = (int)(a); i >= (int)(b); --i)
template<class T> inline bool maximize(T &r, const T &v) {return r < v ? r = v, 1 : 0;}
template<class T> inline bool minimize(T &r, const T &v) {return r > v ? r = v, 1 : 0;}

const int N = 1e6 + 7;



void ttk32() {
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    if (fopen(task ".inp", "r")) {
        freopen(task ".inp", "r", stdin);
        freopen(task ".out", "w", stdout);
    }
    int ntest = 1;
    // cin >> ntest;
    while (ntest--) ttk32();
    // cerr << "\nTime: " << (double)clock() / CLOCKS_PER_SEC * 1000 << " ms";
    return 0;
}