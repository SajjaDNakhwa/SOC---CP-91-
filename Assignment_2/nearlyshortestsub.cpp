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
vi divisors(int n){
    vi div;
    for(int i = 1; i <= n; i++){
        if(n%i==0){
            div.push_back(i);
        }
    }
    return div;
}
bool checkonediff(string s, string r){
    int count = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != r[i])
            count++;
    }
    if(count <= 1)
        return true;
    else
         return false;
}




void solve(){
    int n; cin>>n; string s; cin>>s;
    vi v = divisors(n);
    for(auto x: v){
        string prefix;
        for(int i = 0; i < x; i++){
            prefix.push_back(s[i]);
        }
        string pref_total;
        for(int i = 1; i <= n/x; i++){
            pref_total += prefix;
        }
        string suffix;
        for(int i = n - x; i < n; i++){
            suffix.push_back(s[i]);
        }
        string suff_total;
        for(int i = 1; i <= n/x; i++){
            suff_total += suffix;
        }
        if(checkonediff(pref_total,s) || checkonediff(suff_total,s))
            {cout<<x<<endl; return;}
        
    }


    }
    

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}