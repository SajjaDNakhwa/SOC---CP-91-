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
    int n; cin>>n; int target; cin>>target;

    vi v(n);
    for(int i = 0;i < n ;i++){
        cin>>v[i];
    }
    map<int,int> mp;
    pair<int, int> ans; ans.first = ans.second = -1;
    for(int i = 0; i < n; i++){
        if(mp.find(v[i]) != mp.end())
            {ans.first = mp[v[i]]; ans.second = i;}
        else
        {   
            int required = target - v[i];
            mp[required] = i;
        }
    }
    cout<<ans.first<<" "<<ans.second<<endl;

        
}
    

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}