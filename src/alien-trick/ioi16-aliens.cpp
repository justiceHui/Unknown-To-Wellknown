#include "aliens.h"
#include <bits/stdc++.h>
#define x first
#define y second
#define all(v) v.begin(), v.end()
using namespace std;

typedef long long ll;
typedef pair<ll, ll> p;

int n, k;
ll dp[101010];
int cnt[101010];
p a[101010];
vector<p> v;

struct CHT{
    struct Line{
        ll a, b, c;
        Line() : Line(0, 0, 0) {}
        Line(ll a, ll b, ll c) : a(a), b(b), c(c) {}
        ll f(ll x){ return a * x + b; }
    };
    Line v[101010]; int pv, top;
    void init(){ pv = top = 0; }
    int chk(const Line &a, const Line &b, const Line &c){
        return (__int128_t)(a.b - b.b) * (b.a - c.a) <= (__int128_t)(c.b - b.b) * (b.a - a.a);
    }
    void update(Line l){
        while(top >= pv+2 && chk(v[top-2], v[top-1], l)) top--;
        v[top++] = l;
    }
    void update(ll a, ll b, ll c){ update({a, b, c}); }
    p query(ll x){
        while(pv+1 < top && v[pv].f(x) >= v[pv+1].f(x)) pv++;
        return {v[pv].f(x), v[pv].c};
    }
} cht;

void init(int N, int M, int K, const vector<int> &R, const vector<int> &C){
    k = K; v.clear();
    for(int i=0; i<N; i++) v.emplace_back(max(R[i], C[i]) + 1, min(R[i], C[i]));
    sort(all(v));
    for(int i=0; i<N; i++){
        while(n && a[n].y >= v[i].y) n--;
        a[++n] = v[i];
    }
}

int chk(ll c){
    cht.init(); cht.update(CHT::Line(-2 * a[1].y * 2, a[1].y * a[1].y * 2, 0));
    for(int i=1; i<=n; i++){
        auto t = cht.query(a[i].x);
        dp[i] = t.x + a[i].x * a[i].x * 2 + c;
        cnt[i] = cnt[t.y] + 1;
        ll ta = a[i+1].y, tb = max(0LL, a[i].x - a[i+1].y);
        ll aa = -2 * a[i+1].y * 2;
        ll bb = dp[i] + ta*ta*2 - tb*tb*2;
        cht.update(CHT::Line(aa, bb, i));
    }
    return cnt[n];
}

ll take_photos(int N, int M, int K, vector<int> R, vector<int> C){
    init(N, M, K, R, C);
    int q = min(n, k);

    ll l = 0, r = 1e15;
    while(l < r){
        ll m = l + r >> 1;
        if(chk(m << 1 | 1) <= q) r = m;
        else l = m + 1;
    }
    chk(r << 1);
    return dp[n] / 2 - r * q;
}
