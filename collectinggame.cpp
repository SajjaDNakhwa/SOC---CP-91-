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
   vector<pi> v(n);
   for(int i = 0; i < n; i++){
    cin>>v[i].first; v[i].second = i;
   }
   sort(v.begin(),v.end());
   // for(int i = 0; i < n;i++){
   //  cout<<v[i].first<<" "<<v[i].second<<endl;
   // }
   //create prefix
   vector<ll> prefix(n);
   prefix[0] = v[0].first;
   for(int i = 1; i < n; i++){
    prefix[i] = prefix[i-1] + v[i].first;
   }

   // for(auto x: prefix){
   //  cout<<x<<" ";
   // }
   vi ans(n);
   ans[v[n-1].second] = n-1;
   for(int i = n-2; i >= 0; i--){
    int temp = i;
    if(prefix[i] >= v[i+1].first)
        temp = ans[v[i+1].second];
    ans[v[i].second] = temp;
}
   
   for(auto x: ans)
    cout<<x<<" ";     
    cout<<endl;
}
    

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}