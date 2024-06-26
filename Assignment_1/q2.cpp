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
    string s; cin>>s;
    stack<char> stk;
    bool is_valid = true;
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {stk.push(s[i]);}
        else if(s[i] == ')')
        {
            if(stk.empty())
                {cout<<"false"<<endl; return;}
            if(stk.top() == '(')
                stk.pop();
            else
                {is_valid = false; break;}
        }
        else if(s[i] == '}')
        {
            if(stk.empty())
                {cout<<"false"<<endl; return;}
            if(stk.top() == '{')
                stk.pop();
            else
                {is_valid = false; break;}
        }
        else if(s[i] == ']')
        {
            if(stk.empty())
                {cout<<"false"<<endl; return;}
            if(stk.top() == '[')
                stk.pop();
            else
                {is_valid = false; break;}
        }
    }
    if(!(is_valid)){
        cout<<"false"<<endl; return;
    }
    if(!stk.empty()){
        cout<<"false"<<endl; return;
    }
    cout<<"true"<<endl;


    }
    

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int t = 1;
    //cin>>t;
    while(t--) solve();
    return 0;
}