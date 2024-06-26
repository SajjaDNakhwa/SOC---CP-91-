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
    vi arr(n);
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    int l = 0; int r = n - 1;
    int ans = 0; 
    while( l <= r){
        int mid = l + (r-l)/2;
        if(arr[mid] > arr[n-1])
            l = mid + 1;
        else
        {
            r = mid - 1; ans = arr[mid];
        }
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