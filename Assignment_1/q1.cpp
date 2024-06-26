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
    vi v(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        int a; cin>>a; if(a>=k) {cout<<1<<endl; return;}
        sum += a;
        v[i] = a;
    }
    if(sum < k)
        {cout<<-1<<endl; return;}
    if(sum == k)
        {cout<<n<<endl; return;}
    int left = 0; int right = 0; int new_sum = 0;
    int ans = INT_MAX;
    while(left < n || right < n){
        //cout<<"the sum from "<<left<<" to "<<right<<" is "<<new_sum<<endl;
        if(new_sum < k && right < n)
            {
                //cout<<"hello"<<endl;
                new_sum = new_sum + v[right];
                //cout<<new_sum<<endl;
            right++;}
        else if(new_sum >= k && left < n)
        {
            ans = min(ans, right - left);
            new_sum -= v[left];
            left++;
        }
        else break;
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