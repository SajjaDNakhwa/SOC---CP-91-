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
    int n; cin>>n; int s = n;
    int non_set = 0;
    while(n!=0){
        if((n&1) == 0)
        non_set++; 
        n >>= 1;
    }
    //cout<<"the no of nonset bits for "<<s<<" is "<<non_set<<endl;
    cout<<power(2,non_set)<<endl;

        
}
    

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int t = 1;
    cin>>t;
    while(t--) solve();
    return 0;
}