//O(n * k) solution, could not solve for better

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll; 
typedef unsigned long long int ull;
typedef vector<int> vi; 
typedef pair<int, int> pi;
#define pb push_back
#define mp make_pair
//a^b using binary exponentiation
ll power(ll a, ll b){
    ll res = 1;
    while(b > 0){
        if(b % 2 == 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}
vi read_v(int n){
    vi v(n);
    for(int i = 0; i < n;i++)
        cin>>v[i];

    return v;
}



void solve(){
    int n; cin>>n; int k; cin>>k;
    vi v = read_v(n);
    vi ans;
    for(int i = 0; i < n - k + 1; i++){
        int maxi = INT_MIN;
        for(int j = i; j < i+k; j++){
            maxi = max(maxi, v[j]);
        }
        ans.push_back(maxi);
        }
    for(auto x: ans){
        cout<<x<<" ";
    }
    }
    

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int t = 1;
    //cin>>t;
    while(t--) solve();
    return 0;
}