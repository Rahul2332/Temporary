#include <bits/stdc++.h>
using namespace std;
 
#define ar array
#define ll long long
#define int long long
#define ld long double
#define ivec vector<ll>
#define ipec vector<pair<ll,ll> >
#define imap map<ll,ll>
#define pb push_back
#define rep(n)  for(ll i=0; i<n ;i++)
#define PI 3.14159265358979323846
#define check cout<<"Check"<<endl
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
 
const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
bool checkPrime(int n);
void print(vector<ll> vec);
void print(vector<pair<ll,ll> >pec);
 
void solve() {
    
}
 
 
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}
 
 
bool checkPrime(int n) {
    if(n<=1)
        return false;
    if(n<=3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
 
void print(vector<ll> vec) {
    for(auto it: vec)
        cout<<it<<" ";
    cout<<endl;
}
 
void print(vector<pair<ll,ll> >pec) {
    for(auto it: pec)
        cout<<it.first<<"-"<<it.second<<" ";
    cout<<endl;
}
 