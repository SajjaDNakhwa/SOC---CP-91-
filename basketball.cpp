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
   int n; cin>>n; int k; cin>>k;
   vi v(n);
   for(int i = 0; i < n; i++){
    cin>>v[i];
   }
   sort(v.rbegin(),v.rend());
   // for(auto x: v){
   //  cout<<x<<" ";
   // }
   cout<<endl;
   int i = 0;
   while(n!=0){
    if(float(k)/v[i] == k/v[i])
        n--;
    if(n >= ceil(float(k)/v[i]))
    {n -= ceil(float(k)/v[i]); i++;}
    else break;
   }
   cout<<i<<endl;
  

}
    

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int t = 1;
    //cin>>t;
    while(t--) solve();
    return 0;
}