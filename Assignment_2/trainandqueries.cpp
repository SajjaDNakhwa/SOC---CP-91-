#include<bits/stdc++.h>
using namespace std;

typedef long long int ll; 
typedef unsigned long long int ull;
typedef vector<int> vi; 
typedef pair<int, int> pi;
#define pb push_back
#define mp make_pair

const int N = 1e7;
vector<bool> isPrime(N+1, 1);
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
//sieve
void test_case(){
    int n; cin>>n; int k; cin>>k;
    map<int, pair<int,int> > mp;
    for(int i = 0; i < n; i++){
        int a; cin>>a; 
        if(mp.find(a) != mp.end())
            mp[a].second = i;
        else
            {mp[a].first = mp[a].second = i;}
    }
    for(int i = 0; i < k; i++){
        int a,b; cin>>a>>b;
        if(mp.find(a) == mp.end() || mp.find(b) == mp.end())
            cout<<"NO"<<endl;
        else if(mp[a].first >= mp[b].second)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

}
    

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int t = 1;
    cin>>t;
    while(t--) test_case();
    return 0;
}