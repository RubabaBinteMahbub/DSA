/*
A pangram হলো এমন একটি বাক্য বা sentence যেখানে 
একটি ভাষার সব অক্ষর অন্তত একবার করে ব্যবহার করা হয়।
ইংরেজির সবচেয়ে পরিচিত pangram হলো:
“The quick brown fox jumps over thelazy dog.”
*/
/*
এখানে set automatically unique character রাখে,
তাই code ছোট ও সহজ হয়েছে।
*/
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    set<char>st;
    for(char ch:s){
        st.insert(tolower(ch));
    }
    
    if(st.size()==26) cout<<"YES\n";
    else cout<<"NO\n";
}

int main()
{
    solve();
    return 0;
}
