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

void solve(){
   int n; cin>>n;
   set<int> s;
   for(int i = 0; i < n; i++){
    int a; cin>>a; s.insert(a);
   }

   vi v;
   for(auto x: s){
    v.pb(x);
   }
   int ans = 0; int x = v.size();
    for(int i = 0; i < x; i++){
        int lim = v[i] + n;
        auto it = lower_bound(v.begin(),v.end(), lim);
        //cout<<"the current value of a is: "<<a<<endl;
        int d = it - v.begin() - i;
        ans = max(ans,d);
    }
    cout<<ans<<endl;

        

}
    

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}