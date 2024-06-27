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
   vector<ll> v(n);
   for(int i = 0; i < n; i++)
    cin>>v[i];
        
    if(n&1) {cout<<"YES"<<endl; return;}

    for(int i = 1; i < n - 1; i++){
            //cout<<"the element at index "<<i<<" is "<<v[i]<<endl;
            v[i+1] += v[i-1] - v[i];
            v[i] += v[i-1] - v[i];
            //cout<<"the element changed to "<<v[i]<<endl;
            //cout<<"the next element is "<<v[i+1]<<endl;
    }
    if(v[n-1] >= v[n-2])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


        

}
    

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}