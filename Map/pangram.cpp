#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    map<char,int>mp;
    for(int i=0; i<n; i++){
        if(s[i]>='A'&& s[i]<='Z'){
            s[i]+=32;
        }
        mp[s[i]]++;
    }
    
    //int cnt=mp.size();
    int cnt=0;
    for(auto x : mp){
      if(x.second>=1) cnt++;
    }
    
    if(cnt==26) cout<<"YES\n";
    else cout<<"NO\n";
}

int main()
{
    solve();
    return 0;
}
